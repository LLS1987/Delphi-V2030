{******************************************************************************}
{                       CnPack For Delphi/C++Builder                           }
{                     �й����Լ��Ŀ���Դ�������������                         }
{                   (C)Copyright 2001-2023 CnPack ������                       }
{                   ------------------------------------                       }
{                                                                              }
{            ���������ǿ�Դ���������������������� CnPack �ķ���Э������        }
{        �ĺ����·�����һ����                                                }
{                                                                              }
{            ������һ��������Ŀ����ϣ�������ã���û���κε���������û��        }
{        �ʺ��ض�Ŀ�Ķ������ĵ���������ϸ���������� CnPack ����Э�顣        }
{                                                                              }
{            ��Ӧ���Ѿ��Ϳ�����һ���յ�һ�� CnPack ����Э��ĸ��������        }
{        ��û�У��ɷ������ǵ���վ��                                            }
{                                                                              }
{            ��վ��ַ��http://www.cnpack.org                                   }
{            �����ʼ���master@cnpack.org                                       }
{                                                                              }
{******************************************************************************}

unit CnSM4;
{* |<PRE>
================================================================================
* �������ƣ�������������
* ��Ԫ���ƣ��������������㷨 SM4 ��Ԫ
* ��Ԫ���ߣ���Х��liuxiao@cnpack.org)
* ��    ע���ο������㷨�����ĵ� SM4 Encryption alogrithm
*           ���ο���ֲ goldboar �� C ����*
*           ����Ԫδ�������뷽ʽ��Ĭ��ֻ��ĩβ�� 0��
*           ����Ҫ PKCS ֮���֧�֣��������ⲿ����CnPemUtils �е� PKCS ��������
*           ����߰汾 Delphi ���뾡������ʹ�� AnsiString �����汾�ĺ�����ʮ�����Ƴ��⣩��
*           ���ⲻ�����ַ���������Ӱ��ӽ��ܽ����
* ����ƽ̨��Windows 7 + Delphi 5.0
* ���ݲ��ԣ�PWin9X/2000/XP/7 + Delphi 5/6 + MaxOS 64
* �� �� �����õ�Ԫ�е��ַ��������ϱ��ػ�������ʽ
* �޸ļ�¼��2022.07.21 V1.7
*               ���� CTR ģʽ��֧��
*           2022.06.21 V1.6
*               ���뼸���ֽ����鵽ʮ�������ַ���֮��ļӽ��ܺ���
*           2022.04.26 V1.5
*               �޸� LongWord �� Integer ��ַת����֧�� MacOS64
*           2022.04.19 V1.4
*               ʹ�ó�ʼ������ʱ�ڲ����ݣ����޸Ĵ��������
*           2021.12.12 V1.3
*               ���� CFB/OFB ģʽ��֧��
*           2020.03.24 V1.2
*               ���Ӳ��ַ�װ��������������
*           2019.04.15 V1.1
*               ֧�� Win32/Win64/MacOS
*           2014.09.25 V1.0
*               ��ֲ��������Ԫ
================================================================================
|</PRE>}

interface

{$I CnPack.inc}

uses
  Classes, SysUtils, CnNative;

const
  CN_SM4_KEYSIZE = 16;

  CN_SM4_BLOCKSIZE = 16;

  CN_SM4_NONCESIZE = 8;

type
  TCnSM4Key    = array[0..CN_SM4_KEYSIZE - 1] of Byte;
  {* SM4 �ļ��� Key}

  TCnSM4Buffer = array[0..CN_SM4_BLOCKSIZE - 1] of Byte;
  {* SM4 �ļ��ܿ�}

  TCnSM4Iv     = array[0..CN_SM4_BLOCKSIZE - 1] of Byte;
  {* SM4 �� CBC/CFB/OFB �ȵĳ�ʼ������}

  TCnSM4Nonce  = array[0..CN_SM4_NONCESIZE - 1] of Byte;
  {* SM4 �� CTR ģʽ�µĳ�ʼ����������һ�����ֽڼ�����ƴ��һ����Ϊ������ Iv}

  TCnSM4Context = packed record
    Mode: Integer;                                       {!<  encrypt/decrypt }
    Sk: array[0..CN_SM4_KEYSIZE * 2 - 1] of Cardinal;    {!<  SM4 subkeys     }
  end;

procedure SM4Encrypt(Key: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar; Len: Integer);
{* ԭʼ�� SM4 �������ݿ飬ECB ģʽ���� Input �ڵ��������ݼ��ܸ鵽 Output ��
  ���������б�֤ Key ָ���������� 16 �ֽڣ�Input �� Output ָ�����ݳ���Ȳ��Ҷ�Ϊ Len �ֽ�
  �� Len ���뱻 16 ����}

procedure SM4Decrypt(Key: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar; Len: Integer);
{* ԭʼ�� SM4 �������ݿ飬ECB ģʽ���� Input �ڵ��������ݽ��ܸ鵽 Output ��
  ���������б�֤ Key ָ������������ 16 �ֽڣ�Input �� Output ָ�����ݳ���Ȳ��Ҷ�Ϊ Len �ֽ�
  �� Len ���뱻 16 ����}

// ============== �����ַ���������ʮ�������ַ���֮��ļӽ��� ===================

procedure SM4EncryptEcbStr(Key: AnsiString; const Input: AnsiString; Output: PAnsiChar);
{* SM4-ECB ��װ�õ���� AnsiString �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Input    ԭʼ�������ַ������䳤���粻�� 16 ����������ʱ�ᱻ��� #0 �����ȴﵽ 16 �ı���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4DecryptEcbStr(Key: AnsiString; const Input: AnsiString; Output: PAnsiChar);
{* SM4-ECB ��װ�õ���� AnsiString �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Input    ԭʼ�������ַ������䳤���粻�� 16 ����������ʱ�ᱻ��� #0 �����ȴﵽ 16 �ı���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4EncryptCbcStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-CBC ��װ�õ���� AnsiString �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Iv       ������ 16 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4DecryptCbcStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-CBC ��װ�õ���� AnsiString �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Iv       ������ 16 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4EncryptCfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-CFB ��װ�õ���� AnsiString �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Iv       ������ 16 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4DecryptCfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-CFB ��װ�õ���� AnsiString �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Iv       ������ 16 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4EncryptOfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-OFB ��װ�õ���� AnsiString �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Iv       ������ 16 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4DecryptOfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-OFB ��װ�õ���� AnsiString �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Iv       ������ 16 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� (((Length(Input) - 1) div 16) + 1) * 16
 |</PRE>}

procedure SM4EncryptCtrStr(Key: AnsiString; Nonce: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-OFB ��װ�õ���� AnsiString �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Nonce    ������ 8 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� Length(Input)
 |</PRE>}

procedure SM4DecryptCtrStr(Key: AnsiString; Nonce: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
{* SM4-OFB ��װ�õ���� AnsiString �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� #0
  Nonce    ������ 8 �ֽڵĳ�ʼ��������̫���򳬳����ֺ���
  Input    ԭʼ�������ַ���
  Output   Output ��������䳤�ȱ�����ڻ���� Length(Input)
 |</PRE>}

// ================= �����ֽ������������ֽ�����֮��ļӽ��� ====================

function SM4EncryptEcbBytes(Key: TBytes; const Input: TBytes): TBytes;
{* SM4-ECB ��װ�õ���� TBytes �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Input    ԭʼ���������ݣ��䳤���粻�� 16 ����������ʱ�ᱻ��� 0 �����ȴﵽ 16 �ı���
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptEcbBytes(Key: TBytes; const Input: TBytes): TBytes;
{* SM4-ECB ��װ�õ���� TBytes �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Input    ԭʼ���������ݣ��䳤���粻�� 16 ����������ʱ�ᱻ��� 0 �����ȴﵽ 16 �ı���
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptCbcBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
{* SM4-CBC ��װ�õ���� TBytes �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptCbcBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
{* SM4-CBC ��װ�õ���� TBytes �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    input ����
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptCfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
{* SM4-CFB ��װ�õ���� TBytes �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptCfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
{* SM4-CFB ��װ�õ���� TBytes �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    input ����
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptOfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
{* SM4-OFB ��װ�õ���� TBytes �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptOfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
{* SM4-OFB ��װ�õ���� TBytes �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    input ����
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptCtrBytes(Key, Nonce: TBytes; const Input: TBytes): TBytes;
{* SM4-CTR ��װ�õ���� TBytes �ļ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Nonce    8 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Nonce �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptCtrBytes(Key, Nonce: TBytes; const Input: TBytes): TBytes;
{* SM4-CTR ��װ�õ���� TBytes �Ľ��ܷ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Nonce    8 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Nonce �� 0
  Input    input ����
  ����ֵ   ��������
 |</PRE>}

// ============== �����ֽ�����������ʮ�������ַ���֮��ļӽ��� =================

function SM4EncryptEcbBytesToHex(Key: TBytes; const Input: TBytes): AnsiString;
{* SM4-ECB ��װ�õ���� TBytes �ļ��ܲ�ת����ʮ�������ַ����ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Input    ԭʼ���������ݣ��䳤���粻�� 16 ����������ʱ�ᱻ��� 0 �����ȴﵽ 16 �ı���
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptEcbBytesFromHex(Key: TBytes; const Input: AnsiString): TBytes;
{* SM4-ECB ��װ�õ����ʮ�������ַ������ܳ� TBytes �ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Input    ʮ���������ģ�������ĳ����粻�� 16 ����������ʱ�ᱻ��� 0 �����ȴﵽ 16 �ı���
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptCbcBytesToHex(Key, Iv: TBytes; const Input: TBytes): AnsiString;
{* SM4-CBC ��װ�õ���� TBytes �ļ��ܲ�ת����ʮ�������ַ����ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptCbcBytesFromHex(Key, Iv: TBytes; const Input: AnsiString): TBytes;
{* SM4-CBC ��װ�õ����ʮ�������ַ������ܳ� TBytes �ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ʮ����������
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptCfbBytesToHex(Key, Iv: TBytes; const Input: TBytes): AnsiString;
{* SM4-CFB ��װ�õ���� TBytes �ļ��ܲ�ת����ʮ�������ַ����ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptCfbBytesFromHex(Key, Iv: TBytes; const Input: AnsiString): TBytes;
{* SM4-CFB ��װ�õ����ʮ�������ַ������ܳ� TBytes �ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ʮ����������
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptOfbBytesToHex(Key, Iv: TBytes; const Input: TBytes): AnsiString;
{* SM4-OFB ��װ�õ���� TBytes �ļ��ܲ�ת����ʮ�������ַ����ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptOfbBytesFromHex(Key, Iv: TBytes; const Input: AnsiString): TBytes;
{* SM4-OFB ��װ�õ����ʮ�������ַ������ܳ� TBytes �ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Iv       16 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Iv �� 0
  Input    ʮ����������
  ����ֵ   ��������
 |</PRE>}

function SM4EncryptCtrBytesToHex(Key, Nonce: TBytes; const Input: TBytes): AnsiString;
{* SM4-CTR ��װ�õ���� TBytes �ļ��ܲ�ת����ʮ�������ַ����ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Nonce    8 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Nonce �� 0
  Input    ԭʼ����������
  ����ֵ   ��������
 |</PRE>}

function SM4DecryptCtrBytesFromHex(Key, Nonce: TBytes; const Input: AnsiString): TBytes;
{* SM4-CTR ��װ�õ����ʮ�������ַ������ܳ� TBytes �ķ���
 |<PRE>
  Key      16 �ֽ����룬̫����ضϣ������� 0
  Nonce    8 �ֽڳ�ʼ��������̫���򳬳����ֺ��ԣ��������� Nonce �� 0
  Input    ʮ����������
  ����ֵ   ��������
 |</PRE>}

// ======================= ��������������֮��ļӽ��� ==========================

procedure SM4EncryptStreamECB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; Dest: TStream); overload;
{* SM4-ECB �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4DecryptStreamECB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; Dest: TStream); overload;
{* SM4-ECB �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4EncryptStreamCBC(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
{* SM4-CBC �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4DecryptStreamCBC(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
{* SM4-CBC �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4EncryptStreamCFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
{* SM4-CFB �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4DecryptStreamCFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
{* SM4-CFB �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4EncryptStreamOFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
{* SM4-OFB �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4DecryptStreamOFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
{* SM4-OFB �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4EncryptStreamCTR(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Nonce; Dest: TStream);
{* SM4-CTR �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

procedure SM4DecryptStreamCTR(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Nonce; Dest: TStream);
{* SM4-CTR �����ܣ�Count Ϊ 0 ��ʾ��ͷ����������������ֻ���� Stream ��ǰλ���� Count ���ֽ���}

// ����������Ϊ�ײ���ܺ��������ų������ⲿ�������ʹ��

procedure SM4SetKeyEnc(var Ctx: TCnSM4Context; Key: PAnsiChar);
{* �� 16 �ֽ� Key ���� Context ������Ϊ����ģʽ}

procedure SM4SetKeyDec(var Ctx: TCnSM4Context; Key: PAnsiChar);
{* �� 16 �ֽ� Key ���� Context ������Ϊ����ģʽ}

procedure SM4OneRound(SK: PCardinal; Input: PAnsiChar; Output: PAnsiChar);
{* �ӽ���һ���飬���ݴ� Input �� Output������ 16 �ֽڣ����߿�����ͬһ������
  SK�� TSM4Context �� Sk���ӻ��ǽ��������}

implementation

resourcestring
  SCnInvalidInBufSize = 'Invalid Buffer Size for Decryption';
  SCnReadError = 'Stream Read Error';
  SCnWriteError = 'Stream Write Error';

const
  SM4_ENCRYPT = 1;
  SM4_DECRYPT = 0;

  SBoxTable: array[0..CN_SM4_KEYSIZE - 1] of array[0..CN_SM4_KEYSIZE - 1] of Byte = (
    ($D6, $90, $E9, $FE, $CC, $E1, $3D, $B7, $16, $B6, $14, $C2, $28, $FB, $2C, $05),
    ($2B, $67, $9A, $76, $2A, $BE, $04, $C3, $AA, $44, $13, $26, $49, $86, $06, $99),
    ($9C, $42, $50, $F4, $91, $EF, $98, $7A, $33, $54, $0B, $43, $ED, $CF, $AC, $62),
    ($E4, $B3, $1C, $A9, $C9, $08, $E8, $95, $80, $DF, $94, $FA, $75, $8F, $3F, $A6),
    ($47, $07, $A7, $FC, $F3, $73, $17, $BA, $83, $59, $3C, $19, $E6, $85, $4F, $A8),
    ($68, $6B, $81, $B2, $71, $64, $DA, $8B, $F8, $EB, $0F, $4B, $70, $56, $9D, $35),
    ($1E, $24, $0E, $5E, $63, $58, $D1, $A2, $25, $22, $7C, $3B, $01, $21, $78, $87),
    ($D4, $00, $46, $57, $9F, $D3, $27, $52, $4C, $36, $02, $E7, $A0, $C4, $C8, $9E),
    ($EA, $BF, $8A, $D2, $40, $C7, $38, $B5, $A3, $F7, $F2, $CE, $F9, $61, $15, $A1),
    ($E0, $AE, $5D, $A4, $9B, $34, $1A, $55, $AD, $93, $32, $30, $F5, $8C, $B1, $E3),
    ($1D, $F6, $E2, $2E, $82, $66, $CA, $60, $C0, $29, $23, $AB, $0D, $53, $4E, $6F),
    ($D5, $DB, $37, $45, $DE, $FD, $8E, $2F, $03, $FF, $6A, $72, $6D, $6C, $5B, $51),
    ($8D, $1B, $AF, $92, $BB, $DD, $BC, $7F, $11, $D9, $5C, $41, $1F, $10, $5A, $D8),
    ($0A, $C1, $31, $88, $A5, $CD, $7B, $BD, $2D, $74, $D0, $12, $B8, $E5, $B4, $B0),
    ($89, $69, $97, $4A, $0C, $96, $77, $7E, $65, $B9, $F1, $09, $C5, $6E, $C6, $84),
    ($18, $F0, $7D, $EC, $3A, $DC, $4D, $20, $79, $EE, $5F, $3E, $D7, $CB, $39, $48)
  );

  FK: array[0..3] of Cardinal = ($A3B1BAC6, $56AA3350, $677D9197, $B27022DC);

  CK: array[0..CN_SM4_KEYSIZE * 2 - 1] of Cardinal = (
    $00070E15, $1C232A31, $383F464D, $545B6269,
    $70777E85, $8C939AA1, $A8AFB6BD, $C4CBD2D9,
    $E0E7EEF5, $FC030A11, $181F262D, $343B4249,
    $50575E65, $6C737A81, $888F969D, $A4ABB2B9,
    $C0C7CED5, $DCE3EAF1, $F8FF060D, $141B2229,
    $30373E45, $4C535A61, $686F767D, $848B9299,
    $A0A7AEB5, $BCC3CAD1, $D8DFE6ED, $F4FB0209,
    $10171E25, $2C333A41, $484F565D, $646B7279 );

function Min(A, B: Integer): Integer;
begin
  if A < B then
    Result := A
  else
    Result := B;
end;

procedure GetULongBe(var N: Cardinal; B: PAnsiChar; I: Integer);
var
  D: Cardinal;
begin
  D := (Cardinal(B[I]) shl 24) or (Cardinal(B[I + 1]) shl 16) or
    (Cardinal(B[I + 2]) shl 8) or (Cardinal(B[I + 3]));
  N := D;
end;

procedure PutULongBe(N: Cardinal; B: PAnsiChar; I: Integer);
begin
  B[I] := AnsiChar(N shr 24);
  B[I + 1] := AnsiChar(N shr 16);
  B[I + 2] := AnsiChar(N shr 8);
  B[I + 3] := AnsiChar(N);
end;

function SM4Shl(X: Cardinal; N: Integer): Cardinal;
begin
  Result := (X and $FFFFFFFF) shl N;
end;

function ROTL(X: Cardinal; N: Integer): Cardinal;
begin
  Result := SM4Shl(X, N) or (X shr (32 - N));
end;

procedure Swap(var A: Cardinal; var B: Cardinal);
var
  T: Cardinal;
begin
  T := A;
  A := B;
  B := T;
end;

function SM4SBox(Inch: Byte): Byte;
var
  PTable: Pointer;
begin
  PTable := @(SboxTable[0][0]);
  Result := PByte(TCnNativeInt(PTable) + Inch)^;
end;

function SM4Lt(Ka: Cardinal): Cardinal;
var
  BB: Cardinal;
  A: array[0..3] of Byte;
  B: array[0..3] of Byte;
begin
  BB := 0;
  PutULongBe(Ka, @(A[0]), 0);
  B[0] := SM4SBox(A[0]);
  B[1] := SM4SBox(A[1]);
  B[2] := SM4SBox(A[2]);
  B[3] := SM4SBox(A[3]);
  GetULongBe(BB, @(B[0]), 0);

  Result := BB xor (ROTL(BB, 2)) xor (ROTL(BB, 10)) xor (ROTL(BB, 18))
    xor (ROTL(BB, 24));
end;

function SM4F(X0: Cardinal; X1: Cardinal; X2: Cardinal; X3: Cardinal; RK: Cardinal): Cardinal;
begin
  Result := X0 xor SM4Lt(X1 xor X2 xor X3 xor RK);
end;

function SM4CalciRK(Ka: Cardinal): Cardinal;
var
  BB: Cardinal;
  A: array[0..3] of Byte;
  B: array[0..3] of Byte;
begin
  PutULongBe(Ka, @(A[0]), 0);
  B[0] := SM4SBox(A[0]);
  B[1] := SM4SBox(A[1]);
  B[2] := SM4SBox(A[2]);
  B[3] := SM4SBox(A[3]);
  GetULongBe(BB, @(B[0]), 0);
  Result := BB xor ROTL(BB, 13) xor ROTL(BB, 23);
end;

// SK Points to 32 DWord Array; Key Points to 16 Byte Array
procedure SM4SetKey(SK: PCardinal; Key: PAnsiChar);
var
  MK: array[0..3] of Cardinal;
  K: array[0..35] of Cardinal;
  I: Integer;
begin
  GetULongBe(MK[0], Key, 0);
  GetULongBe(MK[1], Key, 4);
  GetULongBe(MK[2], Key, 8);
  GetULongBe(MK[3], Key, 12);

  K[0] := MK[0] xor FK[0];
  K[1] := MK[1] xor FK[1];
  K[2] := MK[2] xor FK[2];
  K[3] := MK[3] xor FK[3];

  for I := 0 to 31 do
  begin
    K[I + 4] := K[I] xor SM4CalciRK(K[I + 1] xor K[I + 2] xor K[I + 3] xor CK[I]);
    (PCardinal(TCnNativeInt(SK) + I * SizeOf(Cardinal)))^ := K[I + 4];
  end;
end;

// SK Points to 32 DWord Array; Input/Output Points to 16 Byte Array
// Input �� Output ������ͬһ������
procedure SM4OneRound(SK: PCardinal; Input: PAnsiChar; Output: PAnsiChar);
var
  I: Integer;
  UlBuf: array[0..35] of Cardinal;
begin
  FillChar(UlBuf[0], SizeOf(UlBuf), 0);

  GetULongBe(UlBuf[0], Input, 0);
  GetULongBe(UlBuf[1], Input, 4);
  GetULongBe(UlBuf[2], Input, 8);
  GetULongBe(UlBuf[3], Input, 12);

  for I := 0 to 31 do
  begin
    UlBuf[I + 4] := SM4F(UlBuf[I], UlBuf[I + 1], UlBuf[I + 2], UlBuf[I + 3],
      (PCardinal(TCnNativeInt(SK) + I * SizeOf(Cardinal)))^);
  end;

  PutULongBe(UlBuf[35], Output, 0);
  PutULongBe(UlBuf[34], Output, 4);
  PutULongBe(UlBuf[33], Output, 8);
  PutULongBe(UlBuf[32], Output, 12);
end;

procedure SM4SetKeyEnc(var Ctx: TCnSM4Context; Key: PAnsiChar);
begin
  Ctx.Mode := SM4_ENCRYPT;
  SM4SetKey(@(Ctx.Sk[0]), Key);
end;

procedure SM4SetKeyDec(var Ctx: TCnSM4Context; Key: PAnsiChar);
var
  I: Integer;
begin
  Ctx.Mode := SM4_DECRYPT;
  SM4SetKey(@(Ctx.Sk[0]), Key);

  for I := 0 to CN_SM4_KEYSIZE - 1 do
    Swap(Ctx.Sk[I], Ctx.Sk[31 - I]);
end;

procedure SM4CryptEcb(var Ctx: TCnSM4Context; Mode: Integer; Length: Integer;
  Input: PAnsiChar; Output: PAnsiChar);
var
  EndBuf: TCnSM4Buffer;
begin
  while Length > 0 do
  begin
    if Length >= CN_SM4_BLOCKSIZE then
    begin
      SM4OneRound(@(Ctx.Sk[0]), Input, Output);
    end
    else
    begin
      // β������ 16���� 0
      FillChar(EndBuf[0], CN_SM4_BLOCKSIZE, 0);
      Move(Input^, EndBuf[0], Length);
      SM4OneRound(@(Ctx.Sk[0]), @(EndBuf[0]), Output);
    end;
    Inc(Input, CN_SM4_BLOCKSIZE);
    Inc(Output, CN_SM4_BLOCKSIZE);
    Dec(Length, CN_SM4_BLOCKSIZE);
  end;
end;

procedure SM4CryptEcbStr(Mode: Integer; Key: AnsiString;
  const Input: AnsiString; Output: PAnsiChar);
var
  Ctx: TCnSM4Context;
begin
  if Length(Key) < CN_SM4_KEYSIZE then
    while Length(Key) < CN_SM4_KEYSIZE do Key := Key + Chr(0) // 16 bytes at least padding 0.
  else if Length(Key) > CN_SM4_KEYSIZE then
    Key := Copy(Key, 1, CN_SM4_KEYSIZE);  // Only keep 16

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1]));
    SM4CryptEcb(Ctx, SM4_ENCRYPT, Length(Input), @(Input[1]), @(Output[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyDec(Ctx, @(Key[1]));
    SM4CryptEcb(Ctx, SM4_DECRYPT, Length(Input), @(Input[1]), @(Output[0]));
  end;
end;

procedure SM4CryptCbc(var Ctx: TCnSM4Context; Mode: Integer; Length: Integer;
  Iv: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar);
var
  I: Integer;
  EndBuf: TCnSM4Buffer;
  LocalIv: TCnSM4Iv;
begin
  Move(Iv^, LocalIv[0], CN_SM4_BLOCKSIZE);
  if Mode = SM4_ENCRYPT then
  begin
    while Length > 0 do
    begin
      if Length >= CN_SM4_BLOCKSIZE then
      begin
        for I := 0 to CN_SM4_BLOCKSIZE - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
            xor LocalIv[I];

        SM4OneRound(@(Ctx.Sk[0]), Output, Output);
        Move(Output[0], LocalIv[0], CN_SM4_BLOCKSIZE);
      end
      else
      begin
        // β������ 16���� 0
        FillChar(EndBuf[0], SizeOf(EndBuf), 0);
        Move(Input^, EndBuf[0], Length);

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := EndBuf[I]
            xor LocalIv[I];

        SM4OneRound(@(Ctx.Sk[0]), Output, Output);
        Move(Output[0], LocalIv[0], CN_SM4_BLOCKSIZE);
      end;

      Inc(Input, CN_SM4_BLOCKSIZE);
      Inc(Output, CN_SM4_BLOCKSIZE);
      Dec(Length, CN_SM4_BLOCKSIZE);
    end;
  end
  else if Mode = SM4_DECRYPT then
  begin
    while Length > 0 do
    begin
      if Length >= CN_SM4_BLOCKSIZE then
      begin
        SM4OneRound(@(Ctx.Sk[0]), Input, Output);

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Output) + I))^
            xor LocalIv[I];

        Move(Input^, LocalIv[0], CN_SM4_BLOCKSIZE);
      end
      else
      begin
        // β������ 16���� 0
        FillChar(EndBuf[0], SizeOf(EndBuf), 0);
        Move(Input^, EndBuf[0], Length);
        SM4OneRound(@(Ctx.Sk[0]), @(EndBuf[0]), Output);

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Output) + I))^
            xor LocalIv[I];

        Move(EndBuf[0], LocalIv[0], CN_SM4_BLOCKSIZE);
      end;

      Inc(Input, CN_SM4_BLOCKSIZE);
      Inc(Output, CN_SM4_BLOCKSIZE);
      Dec(Length, CN_SM4_BLOCKSIZE);
    end;
  end;
end;

procedure SM4CryptCfb(var Ctx: TCnSM4Context; Mode: Integer; Length: Integer;
  Iv: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar);
var
  I: Integer;
  LocalIv: TCnSM4Iv;
begin
  Move(Iv^, LocalIv[0], CN_SM4_BLOCKSIZE);
  if Mode = SM4_ENCRYPT then
  begin
    while Length > 0 do
    begin
      if Length >= CN_SM4_BLOCKSIZE then
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);  // �ȼ��� Iv

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
            xor (PByte(TCnNativeInt(Output) + I))^;  // ���ܽ�������������Ϊ�������

        Move(Output[0], LocalIv[0], CN_SM4_BLOCKSIZE);  // ����ȡ�� Iv �Ա���һ��
      end
      else
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);

        for I := 0 to Length - 1 do // ֻ�����ʣ�೤�ȣ����账�������� 16 �ֽ�
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
            xor (PByte(TCnNativeInt(Output) + I))^;
      end;

      Inc(Input, CN_SM4_BLOCKSIZE);
      Inc(Output, CN_SM4_BLOCKSIZE);
      Dec(Length, CN_SM4_BLOCKSIZE);
    end;
  end
  else if Mode = SM4_DECRYPT then
  begin
    while Length > 0 do
    begin
      if Length >= CN_SM4_BLOCKSIZE then
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);   // �ȼ��� Iv

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Output) + I))^
            xor (PByte(TCnNativeInt(Input) + I))^;    // ���ܽ�����������õ�����

        Move(Input[0], LocalIv[0], CN_SM4_BLOCKSIZE);    // ����ȡ�� Iv ����ȥ��һ�ּ���
      end
      else
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);

        for I := 0 to Length - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Output) + I))^
            xor (PByte(TCnNativeInt(Input) + I))^;
      end;

      Inc(Input, CN_SM4_BLOCKSIZE);
      Inc(Output, CN_SM4_BLOCKSIZE);
      Dec(Length, CN_SM4_BLOCKSIZE);
    end;
  end;
end;

procedure SM4CryptOfb(var Ctx: TCnSM4Context; Mode: Integer; Length: Integer;
  Iv: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar);
var
  I: Integer;
  LocalIv: TCnSM4Iv;
begin
  Move(Iv^, LocalIv[0], CN_SM4_BLOCKSIZE);
  if Mode = SM4_ENCRYPT then
  begin
    while Length > 0 do
    begin
      if Length >= CN_SM4_BLOCKSIZE then
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);  // �ȼ��� Iv

        Move(Output[0], LocalIv[0], CN_SM4_BLOCKSIZE);  // ���ܽ�����������һ��

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do      // ���ܽ����������������
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
            xor (PByte(TCnNativeInt(Output) + I))^;
      end
      else
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);  // �ȼ��� Iv

        for I := 0 to Length - 1 do             // �������� 16 �ֽ�
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
            xor (PByte(TCnNativeInt(Output) + I))^;
      end;

      Inc(Input, CN_SM4_BLOCKSIZE);
      Inc(Output, CN_SM4_BLOCKSIZE);
      Dec(Length, CN_SM4_BLOCKSIZE);
    end;
  end
  else if Mode = SM4_DECRYPT then
  begin
    while Length > 0 do
    begin
      if Length >= CN_SM4_BLOCKSIZE then
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);   // �ȼ��� Iv

        Move(Output[0], LocalIv[0], CN_SM4_BLOCKSIZE);   // ���ܽ�����������һ��

        for I := 0 to CN_SM4_BLOCKSIZE - 1 do       // �����������������õ�����
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Output) + I))^
            xor (PByte(TCnNativeInt(Input) + I))^;
      end
      else
      begin
        SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], Output);   // �ȼ��� Iv

        for I := 0 to Length - 1 do
          (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Output) + I))^
            xor (PByte(TCnNativeInt(Input) + I))^;
      end;

      Inc(Input, CN_SM4_BLOCKSIZE);
      Inc(Output, CN_SM4_BLOCKSIZE);
      Dec(Length, CN_SM4_BLOCKSIZE);
    end;
  end;
end;

// CTR ģʽ�������ݿ顣Output ���ȿ��Ժ� Input һ������������ȡ��
procedure SM4CryptCtr(var Ctx: TCnSM4Context; Mode: Integer; Length: Integer;
  Nonce: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar);
var
  I: Integer;
  LocalIv: TCnSM4Iv;
  Cnt, T: Int64;
begin
  Cnt := 1;

  // �����ּӽ���
  while Length > 0 do
  begin
    if Length >= CN_SM4_BLOCKSIZE then
    begin
      Move(Nonce^, LocalIv[0], SizeOf(TCnSM4Nonce));
      T := Int64HostToNetwork(Cnt);
      Move(T, LocalIv[SizeOf(TCnSM4Nonce)], SizeOf(Int64));

      SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], @LocalIv[0]);  // �ȼ��� Iv

      for I := 0 to CN_SM4_BLOCKSIZE - 1 do      // ���ܽ����������������
        (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
          xor LocalIv[I];
    end
    else
    begin
      Move(Nonce^, LocalIv[0], SizeOf(TCnSM4Nonce));
      T := Int64HostToNetwork(Cnt);
      Move(T, LocalIv[SizeOf(TCnSM4Nonce)], SizeOf(Int64));

      SM4OneRound(@(Ctx.Sk[0]), @LocalIv[0], @LocalIv[0]);  // �ȼ��� Iv

      for I := 0 to Length - 1 do             // �������� 16 �ֽ�
        (PByte(TCnNativeInt(Output) + I))^ := (PByte(TCnNativeInt(Input) + I))^
          xor LocalIv[I];
    end;

    Inc(Input, CN_SM4_BLOCKSIZE);
    Inc(Output, CN_SM4_BLOCKSIZE);
    Dec(Length, CN_SM4_BLOCKSIZE);
    Inc(Cnt);
  end;
end;

procedure SM4CryptCbcStr(Mode: Integer; Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
var
  Ctx: TCnSM4Context;
begin
  if Length(Key) < CN_SM4_KEYSIZE then
    while Length(Key) < CN_SM4_KEYSIZE do Key := Key + Chr(0) // 16 bytes at least padding 0.
  else if Length(Key) > CN_SM4_KEYSIZE then
    Key := Copy(Key, 1, CN_SM4_KEYSIZE);  // Only keep 16

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1]));
    SM4CryptCbc(Ctx, SM4_ENCRYPT, Length(Input), @(Iv[0]), @(Input[1]), @(Output[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyDec(Ctx, @(Key[1]));
    SM4CryptCbc(Ctx, SM4_DECRYPT, Length(Input), @(Iv[0]), @(Input[1]), @(Output[0]));
  end;
end;

procedure SM4CryptCfbStr(Mode: Integer; Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
var
  Ctx: TCnSM4Context;
begin
  if Length(Key) < CN_SM4_KEYSIZE then
    while Length(Key) < CN_SM4_KEYSIZE do Key := Key + Chr(0) // 16 bytes at least padding 0.
  else if Length(Key) > CN_SM4_KEYSIZE then
    Key := Copy(Key, 1, CN_SM4_KEYSIZE);  // Only keep 16

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1]));
    SM4CryptCfb(Ctx, SM4_ENCRYPT, Length(Input), @(Iv[0]), @(Input[1]), @(Output[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1])); // ע�� CFB �Ľ���Ҳ�õ��Ǽ��ܣ�
    SM4CryptCfb(Ctx, SM4_DECRYPT, Length(Input), @(Iv[0]), @(Input[1]), @(Output[0]));
  end;
end;

procedure SM4CryptOfbStr(Mode: Integer; Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
var
  Ctx: TCnSM4Context;
begin
  if Length(Key) < CN_SM4_KEYSIZE then
    while Length(Key) < CN_SM4_KEYSIZE do Key := Key + Chr(0) // 16 bytes at least padding 0.
  else if Length(Key) > CN_SM4_KEYSIZE then
    Key := Copy(Key, 1, CN_SM4_KEYSIZE);  // Only keep 16

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1]));
    SM4CryptOfb(Ctx, SM4_ENCRYPT, Length(Input), @(Iv[0]), @(Input[1]), @(Output[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1])); // ע�� OFB �Ľ���Ҳ�õ��Ǽ��ܣ�
    SM4CryptOfb(Ctx, SM4_DECRYPT, Length(Input), @(Iv[0]), @(Input[1]), @(Output[0]));
  end;
end;

procedure SM4CryptCtrStr(Mode: Integer; Key: AnsiString; Nonce: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
var
  Ctx: TCnSM4Context;
begin
  if Length(Key) < CN_SM4_KEYSIZE then
    while Length(Key) < CN_SM4_KEYSIZE do Key := Key + Chr(0) // 16 bytes at least padding 0.
  else if Length(Key) > CN_SM4_KEYSIZE then
    Key := Copy(Key, 1, CN_SM4_KEYSIZE);  // Only keep 16

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1]));
    SM4CryptCtr(Ctx, SM4_ENCRYPT, Length(Input), @(Nonce[0]), @(Input[1]), @(Output[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[1])); // ע�� CTR �Ľ���Ҳ�õ��Ǽ��ܣ�
    SM4CryptCtr(Ctx, SM4_DECRYPT, Length(Input), @(Nonce[0]), @(Input[1]), @(Output[0]));
  end;
end;

procedure SM4EncryptEcbStr(Key: AnsiString; const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptEcbStr(SM4_ENCRYPT, Key, Input, Output);
end;

procedure SM4DecryptEcbStr(Key: AnsiString; const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptEcbStr(SM4_DECRYPT, Key, Input, Output);
end;

procedure SM4EncryptCbcStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptCbcStr(SM4_ENCRYPT, Key, Iv, Input, Output);
end;

procedure SM4DecryptCbcStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptCbcStr(SM4_DECRYPT, Key, Iv, Input, Output);
end;

procedure SM4EncryptCfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptCfbStr(SM4_ENCRYPT, Key, Iv, Input, Output);
end;

procedure SM4DecryptCfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptCfbStr(SM4_DECRYPT, Key, Iv, Input, Output);
end;

procedure SM4EncryptOfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptOfbStr(SM4_ENCRYPT, Key, Iv, Input, Output);
end;

procedure SM4DecryptOfbStr(Key: AnsiString; Iv: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptOfbStr(SM4_DECRYPT, Key, Iv, Input, Output);
end;

procedure SM4EncryptCtrStr(Key: AnsiString; Nonce: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptCtrStr(SM4_ENCRYPT, Key, Nonce, Input, Output);
end;

procedure SM4DecryptCtrStr(Key: AnsiString; Nonce: PAnsiChar;
  const Input: AnsiString; Output: PAnsiChar);
begin
  SM4CryptCtrStr(SM4_DECRYPT, Key, Nonce, Input, Output);
end;

function SM4CryptEcbBytes(Mode: Integer; Key: TBytes;
  const Input: TBytes): TBytes;
var
  Ctx: TCnSM4Context;
  I, Len: Integer;
begin
  Len := Length(Input);
  if Len <= 0 then
  begin
    Result := nil;
    Exit;
  end;
  SetLength(Result, (((Len - 1) div 16) + 1) * 16);

  Len := Length(Key);
  if Len < CN_SM4_KEYSIZE then // Key ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Key, CN_SM4_KEYSIZE);
    for I := Len to CN_SM4_KEYSIZE - 1 do
      Key[I] := 0;
  end;
  // ���ȴ��� 16 �ֽ�ʱ SM4SetKeyEnc ���Զ����Ժ���Ĳ���

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0]));
    SM4CryptEcb(Ctx, SM4_ENCRYPT, Length(Input), @(Input[0]), @(Result[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyDec(Ctx, @(Key[0]));
    SM4CryptEcb(Ctx, SM4_DECRYPT, Length(Input), @(Input[0]), @(Result[0]));
  end;
end;

function SM4CryptCbcBytes(Mode: Integer; Key, Iv: TBytes;
  const Input: TBytes): TBytes;
var
  Ctx: TCnSM4Context;
  I, Len: Integer;
begin
  Len := Length(Input);
  if Len <= 0 then
  begin
    Result := nil;
    Exit;
  end;
  SetLength(Result, (((Len - 1) div 16) + 1) * 16);

  Len := Length(Key);
  if Len < CN_SM4_KEYSIZE then // Key ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Key, CN_SM4_KEYSIZE);
    for I := Len to CN_SM4_KEYSIZE - 1 do
      Key[I] := 0;
  end;
  // ���ȴ��� 16 �ֽ�ʱ SM4SetKeyEnc ���Զ����Ժ���Ĳ���

  Len := Length(Iv);
  if Len < CN_SM4_BLOCKSIZE then // Iv ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Iv, CN_SM4_BLOCKSIZE);
    for I := Len to CN_SM4_BLOCKSIZE - 1 do
      Iv[I] := 0;
  end;

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0]));
    SM4CryptCbc(Ctx, SM4_ENCRYPT, Length(Input), @(Iv[0]), @(Input[0]), @(Result[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyDec(Ctx, @(Key[0]));
    SM4CryptCbc(Ctx, SM4_DECRYPT, Length(Input), @(Iv[0]), @(Input[0]), @(Result[0]));
  end;
end;

function SM4CryptCfbBytes(Mode: Integer; Key, Iv: TBytes;
  const Input: TBytes): TBytes;
var
  Ctx: TCnSM4Context;
  I, Len: Integer;
begin
  Len := Length(Input);
  if Len <= 0 then
  begin
    Result := nil;
    Exit;
  end;
  SetLength(Result, (((Len - 1) div 16) + 1) * 16);

  Len := Length(Key);
  if Len < CN_SM4_KEYSIZE then // Key ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Key, CN_SM4_KEYSIZE);
    for I := Len to CN_SM4_KEYSIZE - 1 do
      Key[I] := 0;
  end;
  // ���ȴ��� 16 �ֽ�ʱ SM4SetKeyEnc ���Զ����Ժ���Ĳ���

  Len := Length(Iv);
  if Len < CN_SM4_BLOCKSIZE then // Iv ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Iv, CN_SM4_BLOCKSIZE);
    for I := Len to CN_SM4_BLOCKSIZE - 1 do
      Iv[I] := 0;
  end;

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0]));
    SM4CryptCfb(Ctx, SM4_ENCRYPT, Length(Input), @(Iv[0]), @(Input[0]), @(Result[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0])); // ע�� CFB �Ľ���Ҳ�õ��Ǽ��ܣ�
    SM4CryptCfb(Ctx, SM4_DECRYPT, Length(Input), @(Iv[0]), @(Input[0]), @(Result[0]));
  end;
end;

function SM4CryptOfbBytes(Mode: Integer; Key, Iv: TBytes;
  const Input: TBytes): TBytes;
var
  Ctx: TCnSM4Context;
  I, Len: Integer;
begin
  Len := Length(Input);
  if Len <= 0 then
  begin
    Result := nil;
    Exit;
  end;
  SetLength(Result, (((Len - 1) div 16) + 1) * 16);

  Len := Length(Key);
  if Len < CN_SM4_KEYSIZE then // Key ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Key, CN_SM4_KEYSIZE);
    for I := Len to CN_SM4_KEYSIZE - 1 do
      Key[I] := 0;
  end;
  // ���ȴ��� 16 �ֽ�ʱ SM4SetKeyEnc ���Զ����Ժ���Ĳ���

  Len := Length(Iv);
  if Len < CN_SM4_BLOCKSIZE then // Iv ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Iv, CN_SM4_BLOCKSIZE);
    for I := Len to CN_SM4_BLOCKSIZE - 1 do
      Iv[I] := 0;
  end;

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0]));
    SM4CryptOfb(Ctx, SM4_ENCRYPT, Length(Input), @(Iv[0]), @(Input[0]), @(Result[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0])); // ע�� OFB �Ľ���Ҳ�õ��Ǽ��ܣ�
    SM4CryptOfb(Ctx, SM4_DECRYPT, Length(Input), @(Iv[0]), @(Input[0]), @(Result[0]));
  end;
end;

function SM4CryptCtrBytes(Mode: Integer; Key, Nonce: TBytes;
  const Input: TBytes): TBytes;
var
  Ctx: TCnSM4Context;
  I, Len: Integer;
begin
  Len := Length(Input);
  if Len <= 0 then
  begin
    Result := nil;
    Exit;
  end;
  SetLength(Result, Len);

  Len := Length(Key);
  if Len < CN_SM4_KEYSIZE then // Key ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Key, CN_SM4_KEYSIZE);
    for I := Len to CN_SM4_KEYSIZE - 1 do
      Key[I] := 0;
  end;
  // ���ȴ��� 16 �ֽ�ʱ SM4SetKeyEnc ���Զ����Ժ���Ĳ���

  Len := Length(Nonce);
  if Len < CN_SM4_NONCESIZE then // Nonce ����С�� 16 �ֽڲ� 0
  begin
    SetLength(Nonce, CN_SM4_NONCESIZE);
    for I := Len to CN_SM4_NONCESIZE - 1 do
      Nonce[I] := 0;
  end;

  if Mode = SM4_ENCRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0]));
    SM4CryptCtr(Ctx, SM4_ENCRYPT, Length(Input), @(Nonce[0]), @(Input[0]), @(Result[0]));
  end
  else if Mode = SM4_DECRYPT then
  begin
    SM4SetKeyEnc(Ctx, @(Key[0])); // ע�� CTR �Ľ���Ҳ�õ��Ǽ��ܣ�
    SM4CryptCtr(Ctx, SM4_DECRYPT, Length(Input), @(Nonce[0]), @(Input[0]), @(Result[0]));
  end;
end;

function SM4EncryptEcbBytes(Key: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptEcbBytes(SM4_ENCRYPT, Key, Input);
end;

function SM4DecryptEcbBytes(Key: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptEcbBytes(SM4_DECRYPT, Key, Input);
end;

function SM4EncryptCbcBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptCbcBytes(SM4_ENCRYPT, Key, Iv, Input);
end;

function SM4DecryptCbcBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptCbcBytes(SM4_DECRYPT, Key, Iv, Input);
end;

function SM4EncryptCfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptCfbBytes(SM4_ENCRYPT, Key, Iv, Input);
end;

function SM4DecryptCfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptCfbBytes(SM4_DECRYPT, Key, Iv, Input);
end;

function SM4EncryptOfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptOfbBytes(SM4_ENCRYPT, Key, Iv, Input);
end;

function SM4DecryptOfbBytes(Key, Iv: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptOfbBytes(SM4_DECRYPT, Key, Iv, Input);
end;

function SM4EncryptCtrBytes(Key, Nonce: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptCtrBytes(SM4_ENCRYPT, Key, Nonce, Input);
end;

function SM4DecryptCtrBytes(Key, Nonce: TBytes; const Input: TBytes): TBytes;
begin
  Result := SM4CryptCtrBytes(SM4_DECRYPT, Key, Nonce, Input);
end;

function SM4EncryptEcbBytesToHex(Key: TBytes; const Input: TBytes): AnsiString;
begin
  Result := AnsiString(BytesToHex(SM4EncryptEcbBytes(Key, Input)));
end;

function SM4DecryptEcbBytesFromHex(Key: TBytes; const Input: AnsiString): TBytes;
begin
  Result := SM4DecryptEcbBytes(Key, HexToBytes(string(Input)));
end;

function SM4EncryptCbcBytesToHex(Key, Iv: TBytes; const Input: TBytes): AnsiString;
begin
  Result := AnsiString(BytesToHex(SM4EncryptCbcBytes(Key, Iv, Input)));
end;

function SM4DecryptCbcBytesFromHex(Key, Iv: TBytes; const Input: AnsiString): TBytes;
begin
  Result := SM4DecryptCbcBytes(Key, Iv, HexToBytes(string(Input)));
end;

function SM4EncryptCfbBytesToHex(Key, Iv: TBytes; const Input: TBytes): AnsiString;
begin
  Result := AnsiString(BytesToHex(SM4EncryptCfbBytes(Key, Iv, Input)));
end;

function SM4DecryptCfbBytesFromHex(Key, Iv: TBytes; const Input: AnsiString): TBytes;
begin
  Result := SM4DecryptCfbBytes(Key, Iv, HexToBytes(string(Input)));
end;

function SM4EncryptOfbBytesToHex(Key, Iv: TBytes; const Input: TBytes): AnsiString;
begin
  Result := AnsiString(BytesToHex(SM4EncryptOfbBytes(Key, Iv, Input)));
end;

function SM4DecryptOfbBytesFromHex(Key, Iv: TBytes; const Input: AnsiString): TBytes;
begin
  Result := SM4DecryptOfbBytes(Key, Iv, HexToBytes(string(Input)));
end;

function SM4EncryptCtrBytesToHex(Key, Nonce: TBytes; const Input: TBytes): AnsiString;
begin
  Result := AnsiString(BytesToHex(SM4EncryptCtrBytes(Key, Nonce, Input)));
end;

function SM4DecryptCtrBytesFromHex(Key, Nonce: TBytes; const Input: AnsiString): TBytes;
begin
  Result := SM4DecryptCtrBytes(Key, Nonce, HexToBytes(string(Input)));
end;

procedure SM4EncryptStreamECB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  SM4SetKeyEnc(Ctx, @(Key[0]));
  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    SM4OneRound(@(Ctx.Sk[0]), @(TempIn[0]), @(TempOut[0]));

    Done := Dest.Write(TempOut, SizeOf(TempOut));
    if Done < SizeOf(TempOut) then
      raise EStreamError.Create(SCnWriteError);

    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then // β���� 0
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);
    FillChar(TempIn[Count], SizeOf(TempIn) - Count, 0);

    SM4OneRound(@(Ctx.Sk[0]), @(TempIn[0]), @(TempOut[0]));

    Done := Dest.Write(TempOut, SizeOf(TempOut));
    if Done < SizeOf(TempOut) then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4DecryptStreamECB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;
  if (Count mod SizeOf(TCnSM4Buffer)) > 0 then
    raise Exception.Create(SCnInvalidInBufSize);

  SM4SetKeyDec(Ctx, @(Key[0]));
  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    SM4OneRound(@(Ctx.Sk[0]), @(TempIn[0]), @(TempOut[0]));

    Done := Dest.Write(TempOut, SizeOf(TempOut));
    if Done < SizeOf(TempOut) then
      raise EStreamError.Create(SCnWriteError);

    Dec(Count, SizeOf(TCnSM4Buffer));
  end;
end;

procedure SM4EncryptStreamCBC(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Vector := InitVector;
  SM4SetKeyEnc(Ctx, @(Key[0]));

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@Vector[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@Vector[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@Vector[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@Vector[12])^;

    SM4OneRound(@(Ctx.Sk[0]), @(TempIn[0]), @(TempOut[0]));

    Done := Dest.Write(TempOut, SizeOf(TempOut));
    if Done < SizeOf(TempOut) then
      raise EStreamError.Create(SCnWriteError);

    Move(TempOut[0], Vector[0], SizeOf(TCnSM4Iv));
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);
    FillChar(TempIn[Count], SizeOf(TempIn) - Count, 0);

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@Vector[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@Vector[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@Vector[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@Vector[12])^;

    SM4OneRound(@(Ctx.Sk[0]), @(TempIn[0]), @(TempOut[0]));

    Done := Dest.Write(TempOut, SizeOf(TempOut));
    if Done < SizeOf(TempOut) then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4DecryptStreamCBC(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector1, Vector2: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;
  if (Count mod SizeOf(TCnSM4Buffer)) > 0 then
    raise Exception.Create(SCnInvalidInBufSize);

  Vector1 := InitVector;
  SM4SetKeyDec(Ctx, @(Key[0]));

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError(SCnReadError);

    Move(TempIn[0], Vector2[0], SizeOf(TCnSM4Iv));
    SM4OneRound(@(Ctx.Sk[0]), @(TempIn[0]), @(TempOut[0]));

    PCardinal(@TempOut[0])^ := PCardinal(@TempOut[0])^ xor PCardinal(@Vector1[0])^;
    PCardinal(@TempOut[4])^ := PCardinal(@TempOut[4])^ xor PCardinal(@Vector1[4])^;
    PCardinal(@TempOut[8])^ := PCardinal(@TempOut[8])^ xor PCardinal(@Vector1[8])^;
    PCardinal(@TempOut[12])^ := PCardinal(@TempOut[12])^ xor PCardinal(@Vector1[12])^;

    Done := Dest.Write(TempOut, SizeOf(TempOut));
    if Done < SizeOf(TempOut) then
      raise EStreamError(SCnWriteError);

    Vector1 := Vector2;
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;
end;

procedure SM4EncryptStreamCFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Vector := InitVector;
  SM4SetKeyEnc(Ctx, @(Key[0]));

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));     // Key �ȼ��� Iv

    PCardinal(@TempOut[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;  // ���ܽ�����������
    PCardinal(@TempOut[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempOut[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempOut[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempOut, SizeOf(TempOut));   // ���Ľ��д�����Ľ��
    if Done < SizeOf(TempOut) then
      raise EStreamError.Create(SCnWriteError);

    Move(TempOut[0], Vector[0], SizeOf(TCnSM4Iv));    // ���Ľ��ȡ�� Iv ����һ�ּ���
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);
    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));

    PCardinal(@TempOut[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;
    PCardinal(@TempOut[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempOut[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempOut[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempOut, Count);  // ���д���ֻ�������ĳ��ȵĲ��֣�����������
    if Done < Count then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4DecryptStreamCFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Vector := InitVector;
  SM4SetKeyEnc(Ctx, @(Key[0]));  // ע���Ǽ��ܣ����ǽ��ܣ�

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));             // ���Ķ����� TempIn
    if Done < SizeOf(TempIn) then
      raise EStreamError(SCnReadError);
    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0])); // Iv �ȼ����� TempOut

    // ���ܺ������ TempOut ������ TempIn ���õ����� TempOut
    PCardinal(@TempOut[0])^ := PCardinal(@TempOut[0])^ xor PCardinal(@TempIn[0])^;
    PCardinal(@TempOut[4])^ := PCardinal(@TempOut[4])^ xor PCardinal(@TempIn[4])^;
    PCardinal(@TempOut[8])^ := PCardinal(@TempOut[8])^ xor PCardinal(@TempIn[8])^;
    PCardinal(@TempOut[12])^ := PCardinal(@TempOut[12])^ xor PCardinal(@TempIn[12])^;

    Done := Dest.Write(TempOut, SizeOf(TempOut));      // ���� TempOut д��ȥ
    if Done < SizeOf(TempOut) then
      raise EStreamError(SCnWriteError);
    Move(TempIn[0], Vector[0], SizeOf(TCnSM4Iv));       // �������� TempIn ȡ�� Iv ��Ϊ��һ�μ�������������
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);
    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));

    PCardinal(@TempOut[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;
    PCardinal(@TempOut[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempOut[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempOut[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempOut, Count);  // ���д���ֻ�������ĳ��ȵĲ��֣�����������
    if Done < Count then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4EncryptStreamOFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Vector := InitVector;
  SM4SetKeyEnc(Ctx, @(Key[0]));

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));     // Key �ȼ��� Iv

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;  // ���ܽ�����������
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempIn, SizeOf(TempIn));     // ���Ľ��д�����Ľ��
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnWriteError);

    Move(TempOut[0], Vector[0], SizeOf(TCnSM4Iv));    // ���ܽ��ȡ�� Iv ����һ�ּ��ܣ�ע�ⲻ�������
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);
    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempIn, Count);  // ���д���ֻ�������ĳ��ȵĲ��֣�����������
    if Done < Count then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4DecryptStreamOFB(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Iv; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Vector := InitVector;
  SM4SetKeyEnc(Ctx, @(Key[0]));  // ע���Ǽ��ܣ����ǽ��ܣ�

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));             // ���Ķ����� TempIn
    if Done < SizeOf(TempIn) then
      raise EStreamError(SCnReadError);
    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));  // Iv �ȼ����� TempOut

    // ���ܺ������ TempOut ������ TempIn ���õ����� TempIn
    PCardinal(@TempIn[0])^ := PCardinal(@TempOut[0])^ xor PCardinal(@TempIn[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempOut[4])^ xor PCardinal(@TempIn[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempOut[8])^ xor PCardinal(@TempIn[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempOut[12])^ xor PCardinal(@TempIn[12])^;

    Done := Dest.Write(TempIn, SizeOf(TempIn));        // ���� TempIn д��ȥ
    if Done < SizeOf(TempIn) then
      raise EStreamError(SCnWriteError);
    Move(TempOut[0], Vector[0], SizeOf(TCnSM4Iv));       // �������ܽ�� TempOut ȡ�� Iv ��Ϊ��һ�μ�������������
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);
    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempOut, Count);  // ���д���ֻ�������ĳ��ȵĲ��֣�����������
    if Done < Count then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4EncryptStreamCTR(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Nonce; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
  Cnt, T: Int64;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Cnt := 1;
  SM4SetKeyEnc(Ctx, @(Key[0]));

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    // Nonce �ͼ�����ƴ�� Iv
    T := Int64HostToNetwork(Cnt);
    Move(InitVector[0], Vector[0], SizeOf(TCnSM4Nonce));
    Move(T, Vector[SizeOf(TCnSM4Nonce)], SizeOf(Int64));

    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));     // Key �ȼ��� Iv

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;  // ���ܽ�����������
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempIn, SizeOf(TempIn));   // ���Ľ��д�����Ľ��
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnWriteError);

    Inc(Cnt);
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);

    // Nonce �ͼ�����ƴ�� Iv
    T := Int64HostToNetwork(Cnt);
    Move(InitVector[0], Vector[0], SizeOf(TCnSM4Nonce));
    Move(T, Vector[SizeOf(TCnSM4Nonce)], SizeOf(Int64));

    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempIn, Count);  // ���д���ֻ�������ĳ��ȵĲ��֣�����������
    if Done < Count then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4DecryptStreamCTR(Source: TStream; Count: Cardinal;
  const Key: TCnSM4Key; const InitVector: TCnSM4Nonce; Dest: TStream);
var
  TempIn, TempOut: TCnSM4Buffer;
  Vector: TCnSM4Iv;
  Done: Cardinal;
  Ctx: TCnSM4Context;
  Cnt, T: Int64;
begin
  if Count = 0 then
  begin
    Source.Position := 0;
    Count := Source.Size;
  end
  else
    Count := Min(Count, Source.Size - Source.Position);

  if Count = 0 then
    Exit;

  Cnt := 1;
  SM4SetKeyEnc(Ctx, @(Key[0]));    // ע���Ǽ��ܣ����ǽ��ܣ�

  while Count >= SizeOf(TCnSM4Buffer) do
  begin
    Done := Source.Read(TempIn, SizeOf(TempIn));
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnReadError);

    // Nonce �ͼ�����ƴ�� Iv
    T := Int64HostToNetwork(Cnt);
    Move(InitVector[0], Vector[0], SizeOf(TCnSM4Nonce));
    Move(T, Vector[SizeOf(TCnSM4Nonce)], SizeOf(Int64));

    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));     // Key �ȼ��� Iv

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;  // ���ܽ�����������
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempIn, SizeOf(TempIn));   // ���Ľ��д�����Ľ��
    if Done < SizeOf(TempIn) then
      raise EStreamError.Create(SCnWriteError);

    Inc(Cnt);
    Dec(Count, SizeOf(TCnSM4Buffer));
  end;

  if Count > 0 then
  begin
    Done := Source.Read(TempIn, Count);
    if Done < Count then
      raise EStreamError.Create(SCnReadError);

    // Nonce �ͼ�����ƴ�� Iv
    T := Int64HostToNetwork(Cnt);
    Move(InitVector[0], Vector[0], SizeOf(TCnSM4Nonce));
    Move(T, Vector[SizeOf(TCnSM4Nonce)], SizeOf(Int64));

    SM4OneRound(@(Ctx.Sk[0]), @(Vector[0]), @(TempOut[0]));

    PCardinal(@TempIn[0])^ := PCardinal(@TempIn[0])^ xor PCardinal(@TempOut[0])^;
    PCardinal(@TempIn[4])^ := PCardinal(@TempIn[4])^ xor PCardinal(@TempOut[4])^;
    PCardinal(@TempIn[8])^ := PCardinal(@TempIn[8])^ xor PCardinal(@TempOut[8])^;
    PCardinal(@TempIn[12])^ := PCardinal(@TempIn[12])^ xor PCardinal(@TempOut[12])^;

    Done := Dest.Write(TempIn, Count);  // ���д���ֻ�������ĳ��ȵĲ��֣�����������
    if Done < Count then
      raise EStreamError.Create(SCnWriteError);
  end;
end;

procedure SM4Encrypt(Key: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar; Len: Integer);
var
  Ctx: TCnSM4Context;
begin
  SM4SetKeyEnc(Ctx, Key);
  SM4CryptEcb(Ctx, SM4_ENCRYPT, Len, Input, Output);
end;

procedure SM4Decrypt(Key: PAnsiChar; Input: PAnsiChar; Output: PAnsiChar; Len: Integer);
var
  Ctx: TCnSM4Context;
begin
  SM4SetKeyDec(Ctx, Key);
  SM4CryptEcb(Ctx, SM4_DECRYPT, Len, Input, Output);
end;

end.