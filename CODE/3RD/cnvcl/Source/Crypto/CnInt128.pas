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

unit CnInt128;
{* |<PRE>
================================================================================
* �������ƣ�CnPack �����
* ��Ԫ���ƣ�128 λ���޷�������������ʵ��
* ��Ԫ���ߣ���Х (liuxiao@cnpack.org)
* ��    ע��ʵ�ֻ����������㹦�ܣ�����������
* ����ƽ̨��PWinXP + Delphi 5.0
* ���ݲ��ԣ�PWin9X/2000/XP + Delphi 5/6/7 XE 2
* �� �� �����õ�Ԫ�е��ַ��������ϱ��ػ�������ʽ
* �޸ļ�¼��2022.06.14 V1.1
*               ʵ�ֳ��������࣬������
*           2022.06.11 V1.0
*               ������Ԫ��ʵ�ֹ���
================================================================================
|</PRE>}

interface

{$I CnPack.inc}

uses
  SysUtils, Classes, SysConst, CnNative;

type
  TCnInt128 = packed record   // 128 λ�з��������ṹ
    Lo64, Hi64: Int64;        // ע�� Lo64 �ڲ�����Ϊ 64 λ�޷�����������
  end;
  PCnInt128 = ^TCnInt128;

  TCnUInt128 = packed record  // 128 λ�޷��������ṹ
    Lo64, Hi64: TUInt64;
  end;
  PCnUInt128 = ^TCnUInt128;

// ========================= Int128 ���㺯�� ===================================

procedure Int128Set(var R: TCnInt128; Lo, Hi: Int64); overload;
{* �ֱ����� 128 λ�з������ĸߵ� 64 λԭʼֵ�������⴦��������}

procedure Int128Set(var R: TCnInt128; Lo: Int64); overload;
{* ���� 128 λ�з������ĵ� 64 λֵ����λ�������������ȫ 0 ��ȫ F}

procedure Int128Copy(var D, S: TCnInt128);
{* ���� 128 λ�з�����}

function Int128IsZero(var N: TCnInt128): Boolean;
{* �ж� һ 128 λ�з������Ƿ��� 0}

procedure Int128SetZero(var N: TCnInt128);
{* ��һ 128 λ�з������� 0}

procedure Int128Add(var R, A, B: TCnInt128); overload;
{* 128 λ�з�������ӣ�����������������R��A��B ������ͬ��A B ʹ�ò�������ֿ���������ֵ}

procedure Int128Add(var R, A: TCnInt128; V: Int64); overload;
{* ��һ 128 λ�з���������һ�� 64 λ�з������������� B Ϊ��ֵ�����}

procedure Int128Sub(var R, A, B: TCnInt128); overload;
{* 128 λ�з��������������������������R��A��B ������ͬ}

procedure Int128Sub(var R, A: TCnInt128; V: Int64); overload;
{* ��һ 128 λ�з�������ȥһ�� 64 λ�з������������� B Ϊ��ֵ�����}

procedure Int128Mul(var R, A, B: TCnInt128);
{* 128 λ�з�������ˣ�����������쳣��ResHi �����ݲ������ã���R��A��B ������ͬ}

procedure Int128DivMod(var A, B, R, M: TCnInt128);
{* 128 λ�з������������࣬A / B = R ... M��A��B��R��M ���Ը��õ� R M ������ͬ}

procedure Int128Div(var R, A, B: TCnInt128);
{* 128 λ�з�����������R = A div B��R��A��B ������ͬ}

procedure Int128Mod(var R, A, B: TCnInt128);
{* 128 λ�з��������࣬R = A mod B��R��A��B ������ͬ}

procedure Int128ShiftLeft(var N: TCnInt128; S: Integer);
{* 128 λ�з�������λ����}

procedure Int128ShiftRight(var N: TCnInt128; S: Integer);
{* 128 λ�з�������λ����}

procedure Int128And(var R, A, B: TCnInt128);
{* ���� 128 λ�з�������λ��}

procedure Int128Or(var R, A, B: TCnInt128);
{* ���� 128 λ�з�������λ��}

procedure Int128Xor(var R, A, B: TCnInt128);
{* ���� 128 λ�з�������λ���}

procedure Int128Negate(var N: TCnInt128);
{* ��һ 128 λ�з�������Ϊ���෴��}

procedure Int128Not(var N: TCnInt128);
{* ��һ 128 λ�з�������}

procedure Int128SetBit(var N: TCnInt128; Bit: Integer);
{* ��һ 128 λ�з�������ĳһλ�� 1��Bit �� 0 �� 127}

procedure Int128ClearBit(var N: TCnInt128; Bit: Integer);
{* ��һ 128 λ�з�������ĳһλ�� 0��Bit �� 0 �� 127}

function Int128IsBitSet(var N: TCnInt128; Bit: Integer): Boolean;
{* ����һ 128 λ�з�������ĳһλ�Ƿ��� 0��Bit �� 0 �� 127}

function Int128IsNegative(var N: TCnInt128): Boolean;
{* �ж�һ 128 λ�з������Ƿ��Ǹ���}

function Int128Equal(var A, B: TCnInt128): Boolean; overload;
{* �ж����� 128 λ�з������Ƿ����}

function Int128Equal(var A: TCnInt128; B: Int64): Boolean; overload;
{* �ж�һ�� 128 λ�з�������һ�� Int64 �Ƿ����}

function Int128Compare(var A, B: TCnInt128): Integer;
{* �Ƚ����� 128 λ�з����������ڵ���С�ڷֱ𷵻� 1��0��-1}

function Int128ToHex(var N: TCnInt128): string;
{* �� 128 λ�з�����ת��Ϊʮ�������ַ���}

function HexToInt128(const S: string): TCnInt128;
{* ��ʮ�������ַ���ת��Ϊ 128 λ�з�����}

function Int128ToStr(var N: TCnInt128): string;
{* �� 128 λ�з�����ת��Ϊʮ�����ַ���}

function StrToInt128(const S: string): TCnInt128;
{* ��ʮ�����ַ���ת��Ϊ 128 λ�з�����}

// ======================== UInt128 ���㺯�� ===================================

procedure UInt128Set(var R: TCnUInt128; Lo, Hi: TUInt64); overload;
{* �ֱ����� 128 λ�޷������ĸߵ� 64 λֵ}

procedure UInt128Set(var R: TCnUInt128; Lo: TUInt64); overload;
{* ���� 128 λ�޷������ĵ� 64 λֵ����λ�� 0}

procedure UInt128Copy(var D, S: TCnUInt128);
{* ���� 128 λ�޷�����}

function UInt128IsZero(var N: TCnUInt128): Boolean;
{* �ж� һ 128 λ�޷������Ƿ��� 0}

procedure UInt128SetZero(var N: TCnUInt128);
{* ��һ 128 λ�޷������� 0}

procedure UInt128Add(var R: TCnUInt128; V: TUInt64); overload;
{* ��һ 128 λ�޷���������һ�� 64 λ�޷�����}

procedure UInt128Add(var R, A, B: TCnUInt128); overload;
{* 128 λ�޷�������ӣ�����������������R��A��B ������ͬ}

procedure UInt128Sub(var R, A, B: TCnUInt128);
{* 128 λ�޷��������������������������R��A��B ������ͬ}

procedure UInt128Mul(var R, A, B: TCnUInt128; ResHi: PCnUInt128 = nil);
{* 128 λ�޷�������ˣ�������򳬹� 128 λ�ķ� ResHi ��
  �紫 nil ����������쳣��R��A��B ������ͬ}

procedure UInt128DivMod(var A, B, R, M: TCnUInt128);
{* 128 λ�޷������������࣬A / B = R ... M��A��B��R��M ���Ը��õ� R M ������ͬ}

procedure UInt128Div(var R, A, B: TCnUInt128);
{* 128 λ�޷�����������R = A div B��R��A��B ������ͬ}

procedure UInt128Mod(var R, A, B: TCnUInt128);
{* 128 λ�޷��������࣬R = A mod B��R��A��B ������ͬ}

procedure UInt128ShiftLeft(var N: TCnUInt128; S: Integer);
{* 128 λ�޷�������λ����}

procedure UInt128ShiftRight(var N: TCnUInt128; S: Integer);
{* 128 λ�޷�������λ����}

procedure UInt128And(var R, A, B: TCnUInt128);
{* ���� 128 λ�޷�������λ��}

procedure UInt128Or(var R, A, B: TCnUInt128);
{* ���� 128 λ�޷�������λ��}

procedure UInt128Xor(var R, A, B: TCnUInt128);
{* ���� 128 λ�޷�������λ���}

procedure UInt128Not(var N: TCnUInt128);
{* 128 λ�޷�������}

procedure UInt128SetBit(var N: TCnUInt128; Bit: Integer);
{* ��һ 128 λ�޷�������ĳһλ�� 1��Bit �� 0 �� 127}

procedure UInt128ClearBit(var N: TCnUInt128; Bit: Integer);
{* ��һ 128 λ�޷�������ĳһλ�� 0��Bit �� 0 �� 127}

function UInt128IsBitSet(var N: TCnUInt128; Bit: Integer): Boolean;
{* ����һ 128 λ�޷�������ĳһλ�Ƿ��� 0��Bit �� 0 �� 127}

function UInt128Equal(var A, B: TCnUInt128): Boolean; overload;
{* �ж����� 128 λ�޷������Ƿ����}

function UInt128Equal(var A: TCnUInt128; B: TUInt64): Boolean; overload;
{* �ж�һ�� 128 λ�޷�������һ�� Int64/UInt64 �Ƿ����}

function UInt128Compare(var A, B: TCnUInt128): Integer;
{* �Ƚ����� 128 λ�޷����������ڵ���С�ڷֱ𷵻� 1��0��-1}

function IsUInt128AddOverflow(var A, B: TCnUInt128): Boolean;
{* �ж����� 64 λ�޷���������Ƿ���� 128 λ�޷�������}

function UInt128ToHex(var N: TCnUInt128): string;
{* �� 128 λ�޷�����ת��Ϊʮ�������ַ���}

function HexToUInt128(const S: string): TCnUInt128;
{* ��ʮ�����ַ���ת��Ϊ 128 λ�޷�����}

function UInt128ToStr(var N: TCnUInt128): string;
{* �� 128 λ�޷�����ת��Ϊʮ�����ַ���}

function StrToUInt128(const S: string): TCnUInt128;
{* ��ʮ�����ַ���ת��Ϊ 128 λ�޷�����}

implementation

var
  FInt128Zero: TCnInt128 = (Lo64: 0; Hi64: 0);
  FInt128One: TCnInt128 = (Lo64:1; Hi64: 0);

  FUInt128Zero: TCnUInt128 = (Lo64: 0; Hi64: 0);
  FUInt128One: TCnUInt128 = (Lo64:1; Hi64: 0);

procedure Int128Set(var R: TCnInt128; Lo, Hi: Int64);
begin
  R.Lo64 := Lo;
  R.Hi64 := Hi;
end;

procedure Int128Set(var R: TCnInt128; Lo: Int64);
begin
  R.Lo64 := Lo;
  if Lo >= 0 then
    R.Hi64 := 0
  else
    R.Hi64 := not 0;
end;

procedure Int128Copy(var D, S: TCnInt128);
begin
  D.Lo64 := S.Lo64;
  D.Hi64 := S.Hi64;
end;

function Int128IsZero(var N: TCnInt128): Boolean;
begin
  Result := (N.Lo64 = 0) and (N.Hi64 = 0);
end;

procedure Int128SetZero(var N: TCnInt128);
begin
  N.Lo64 := 0;
  N.Hi64 := 0;
end;

procedure Int128Add(var R, A, B: TCnInt128);
var
  C: Integer;
begin
{$IFDEF SUPPORT_UINT64}
  UInt64Add(UInt64(R.Lo64), UInt64(A.Lo64), UInt64(B.Lo64), C);
{$ELSE}
  UInt64Add(R.Lo64, A.Lo64, B.Lo64, C);
{$ENDIF}
  R.Hi64 := A.Hi64 + B.Hi64 + C;
end;

procedure Int128Add(var R, A: TCnInt128; V: Int64); overload;
var
  C: Integer;
begin
  if V < 0 then
  begin
    V := (not V) + 1; // �󷴼�һ����ֵȻ���
{$IFDEF SUPPORT_UINT64}
    UInt64Sub(UInt64(R.Lo64), UInt64(A.Lo64), UInt64(V), C);
{$ELSE}
    UInt64Sub(R.Lo64, A.Lo64, V, C);
{$ENDIF}
  end
  else // V >= 0���� UInt64 ͬ������
  begin
{$IFDEF SUPPORT_UINT64}
    UInt64Add(UInt64(R.Lo64), UInt64(A.Lo64), UInt64(V), C);
{$ELSE}
    UInt64Add(R.Lo64, A.Lo64, V, C);
{$ENDIF}
  end;
  R.Hi64 := A.Hi64 + C;
end;

procedure Int128Sub(var R, A, B: TCnInt128);
var
  C: Integer;
begin
{$IFDEF SUPPORT_UINT64}
  UInt64Sub(UInt64(R.Lo64), UInt64(A.Lo64), UInt64(B.Lo64), C);
{$ELSE}
  UInt64Sub(R.Lo64, A.Lo64, B.Lo64, C);
{$ENDIF}
  R.Hi64 := A.Hi64 - B.Hi64 - C;
end;

procedure Int128Sub(var R, A: TCnInt128; V: Int64);
var
  C: Integer;
begin
  if V < 0 then
  begin
    V := (not V) + 1; // �󷴼�һ����ֵȻ���
{$IFDEF SUPPORT_UINT64}
    UInt64Add(UInt64(R.Lo64), UInt64(A.Lo64), UInt64(V), C);
{$ELSE}
    UInt64Add(R.Lo64, A.Lo64, V, C);
{$ENDIF}
  end
  else // V >= 0���� UInt64 ͬ������
  begin
{$IFDEF SUPPORT_UINT64}
    UInt64Sub(UInt64(R.Lo64), UInt64(A.Lo64), UInt64(V), C);
{$ELSE}
    UInt64Sub(R.Lo64, A.Lo64, V, C);
{$ENDIF}
  end;
  R.Hi64 := A.Hi64 - C;
end;

procedure Int128Mul(var R, A, B: TCnInt128);
var
  N1, N2: Boolean;
begin
  N1 := Int128IsNegative(A);
  N2 := Int128IsNegative(B);

  // ȫ����
  if N1 then
    Int128Negate(A);
  if N2 then
    Int128Negate(B);

  UInt128Mul(TCnUInt128(R), TCnUInt128(A), TCnUInt128(B));
  if Int128IsNegative(R) then // �˻��Ǹ�˵�������
    raise EIntOverflow.Create('Int128 Mul Overflow');

  if N1 <> N2 then // ֻҪ��һ�����
    Int128Negate(R);

  // ���ȥ
  if N1 then
    Int128Negate(A);
  if N2 then
    Int128Negate(B);
end;

procedure Int128DivMod(var A, B, R, M: TCnInt128);
var
  Sft: Integer;
  AA, BB: TCnInt128;
  NA, NB: Boolean;
begin
  if Int128IsZero(B) then
    raise EDivByZero.Create(SDivByZero);

  if Int128IsZero(A) then
  begin
    Int128SetZero(R);
    Int128SetZero(M);
    Exit;
  end;

  Int128Copy(AA, A);
  Int128Copy(BB, B);
  NA := Int128IsNegative(AA);
  NB := Int128IsNegative(BB);

  if NA then
    Int128Negate(AA);
  if NB then
    Int128Negate(BB);  // ȫת��

  if Int128Compare(AA, BB) < 0 then
  begin
    Int128Copy(M, AA);
    if NA <> NB then
      Int128Negate(M); // �����Ϊ��
    Int128SetZero(R);
    Exit;
  end;

  Int128SetZero(R);
  Int128Copy(M, AA);
  Sft := 0;

  // ����������ͱ��������λ��ͬ�ұȱ�����С
  while (Int128Compare(BB, M) < 0) and not GetUInt64BitSet(BB.Hi64, 62) do
  begin
    if Sft = 127 then
      Break;

    Int128ShiftLeft(BB, 1);
    Inc(Sft);
    if Int128Compare(BB, M) > 0 then
    begin
      Int128ShiftRight(BB, 1);
      Dec(Sft);
      Break;
    end;
  end;

  // �𲽳�
  while True do
  begin
    if Int128Compare(BB, M) <= 0 then // �����ƣ�ֻ��Ҫ��һ�Σ�D �����
    begin
      Int128Sub(M, M, BB);
      Int128SetBit(R, Sft);

      // �����ʱ M Ϊ 0��ò�ƿ�����������û������
      if Int128IsZero(M) then
        Exit;
    end;

    if Sft > 0 then
    begin
      Int128ShiftRight(BB, 1);
      Dec(Sft);
    end
    else
      Break;
  end;

  if NA <> NB then
    Int128Negate(R);
  if Int128IsNegative(A) then
    Int128Negate(M);
end;

procedure Int128Div(var R, A, B: TCnInt128);
var
  T: TCnInt128;
begin
  Int128DivMod(A, B, R, T);
end;

procedure Int128Mod(var R, A, B: TCnInt128);
var
  T: TCnInt128;
begin
  Int128DivMod(A, B, T, R);
end;

procedure Int128ShiftLeft(var N: TCnInt128; S: Integer);
begin
  UInt128ShiftLeft(TCnUInt128(N), S);
end;

procedure Int128ShiftRight(var N: TCnInt128; S: Integer);
begin
  UInt128ShiftRight(TCnUInt128(N), S);
end;

procedure Int128And(var R, A, B: TCnInt128);
begin
  R.Lo64 := A.Lo64 and B.Lo64;
  R.Hi64 := A.Hi64 and B.Hi64;
end;

procedure Int128Or(var R, A, B: TCnInt128);
begin
  R.Lo64 := A.Lo64 or B.Lo64;
  R.Hi64 := A.Hi64 or B.Hi64;
end;

procedure Int128Xor(var R, A, B: TCnInt128);
begin
  R.Lo64 := A.Lo64 xor B.Lo64;
  R.Hi64 := A.Hi64 xor B.Hi64;
end;

procedure Int128Negate(var N: TCnInt128);
var
  C: Integer;
begin
  // ȫ����Ȼ�������һ
  N.Lo64 := not N.Lo64;
  N.Hi64 := not N.Hi64;

{$IFDEF SUPPORT_UINT64}
  UInt64Add(UInt64(N.Lo64), UInt64(N.Lo64), 1, C);
{$ELSE}
  UInt64Add(N.Lo64, N.Lo64, 1, C);
{$ENDIF}
  if C > 0 then
    N.Hi64 := N.Hi64 + C;
end;

procedure Int128Not(var N: TCnInt128);
begin
  N.Lo64 := not N.Lo64;
  N.Hi64 := not N.Hi64;
end;

procedure Int128SetBit(var N: TCnInt128; Bit: Integer);
begin
{$IFDEF SUPPORT_UINT64}
  if Bit > 63 then
    UInt64SetBit(TUInt64(N.Hi64), Bit - 64)
  else
    UInt64SetBit(TUInt64(N.Lo64), Bit);
{$ELSE}
  if Bit > 63 then
    UInt64SetBit(N.Hi64, Bit - 64)
  else
    UInt64SetBit(N.Lo64, Bit);
{$ENDIF}
end;

procedure Int128ClearBit(var N: TCnInt128; Bit: Integer);
begin
{$IFDEF SUPPORT_UINT64}
  if Bit > 63 then
    UInt64ClearBit(TUInt64(N.Hi64), Bit - 64)
  else
    UInt64ClearBit(TUInt64(N.Lo64), Bit);
{$ELSE}
  if Bit > 63 then
    UInt64ClearBit(N.Hi64, Bit - 64)
  else
    UInt64ClearBit(N.Lo64, Bit);
{$ENDIF}
end;

function Int128IsBitSet(var N: TCnInt128; Bit: Integer): Boolean;
begin
  if Bit > 63 then
    Result := GetUInt64BitSet(N.Hi64, Bit - 64)
  else
    Result := GetUInt64BitSet(N.Hi64, Bit);
end;

function Int128IsNegative(var N: TCnInt128): Boolean;
begin
  Result := N.Hi64 < 0;
end;

function Int128Equal(var A, B: TCnInt128): Boolean;
begin
  Result := (A.Lo64 = B.Lo64) and (A.Hi64 = B.Hi64);
end;

function Int128Equal(var A: TCnInt128; B: Int64): Boolean; overload;
begin
  Result := (A.Hi64 = 0) and (A.Lo64 = B);
end;

function Int128Compare(var A, B: TCnInt128): Integer;
var
  R: Integer;
begin
  if A.Hi64 > B.Hi64 then
    Result := 1
  else if A.Hi64 < B.Hi64 then
    Result := -1
  else
  begin
    R := UInt64Compare(A.Lo64, B.Lo64); // �� 64 λ����Ϊ�޷������Ƚ�
    if A.Hi64 < 0 then // ����Ǹ�ֵ������
      R := -R;

    if R > 0 then
      Result := 1
    else if R < 0 then
      Result := -1
    else
      Result := 0;
  end;
end;

function Int128ToHex(var N: TCnInt128): string;
var
  T, M, Mask: TCnInt128;
  Neg: Boolean;
begin
  if Int128IsZero(N) then
  begin
    Result := '0';
    Exit;
  end;

  Int128Copy(T, N);
  Neg := Int128IsNegative(T);
  if Neg then
    Int128Negate(T);

  Result := '';
  Int128Set(Mask, $F);
  while not Int128IsZero(T) do
  begin
    Int128And(M, T, Mask);
    Int128ShiftRight(T, 4);
    Result := IntToHex(M.Lo64, 1) + Result;
  end;

  if Neg then
    Result := '-' + Result;
end;

{$WARNINGS OFF}

function HexToInt128(const S: string): TCnInt128;
var
  I, K: Integer;
  St, T: TCnInt128;
  Neg: Boolean;
begin
  Int128SetZero(Result);
  Int128Set(St, 16);

  Neg := False;
  for I := 1 to Length(S) do
  begin
    if S[I] in ['0'..'9', 'a'..'f', 'A'..'F'] then
    begin
      Int128Mul(Result, Result, St);
      K := 0;
      if (S[I] >= '0') and (S[I] <= '9') then
        K := Ord(S[I]) - Ord('0')
      else if (S[I] >= 'A') and (S[I] <= 'F') then
        K := Ord(S[I]) - Ord('A') + 10
      else if (S[I] >= 'a') and (S[I] <= 'f') then
        K := Ord(S[I]) - Ord('a') + 10;

      Int128Set(T, K);
      Int128Add(Result, Result, T);
    end
    else if (I = 1) and (S[I] = '-') then
      Neg := True
    else
      raise EConvertError.CreateFmt(SInvalidInteger, [S[I]]);
  end;

  if Neg then
    Int128Negate(Result);
end;

function Int128ToStr(var N: TCnInt128): string;
var
  T, Ten, M: TCnInt128;
  Neg: Boolean;
begin
  if Int128IsZero(N) then
  begin
    Result := '0';
    Exit;
  end;

  Int128Copy(T, N);
  Int128Set(Ten, 10);

  Neg := Int128IsNegative(T);
  if Neg then
    Int128Negate(T);

  Result := '';
  while not Int128IsZero(T) do
  begin
    Int128DivMod(T, Ten, T, M);
    Result := IntToStr(M.Lo64) + Result;
  end;

  if Neg then
    Result := '-' + Result;
end;

function StrToInt128(const S: string): TCnInt128;
var
  I: Integer;
  Ten, T: TCnInt128;
  Neg: Boolean;
begin
  Int128SetZero(Result);
  Int128Set(Ten, 10);

  Neg := False;
  for I := 1 to Length(S) do
  begin
    if S[I] in ['0'..'9'] then
    begin
      Int128Mul(Result, Result, Ten);
      Int128Set(T, Ord(S[I]) - Ord('0'));
      Int128Add(Result, Result, T);
    end
    else if (I = 1) and (S[I] = '-') then
      Neg := True
    else
      raise EConvertError.CreateFmt(SInvalidInteger, [S[I]]);
  end;
  if Neg then
    Int128Negate(Result);
end;

{$WARNINGS ON}

// ======================== UInt128 ���㺯�� ===================================

procedure UInt128Set(var R: TCnUInt128; Lo, Hi: TUInt64);
begin
  R.Lo64 := Lo;
  R.Hi64 := Hi;
end;

procedure UInt128Set(var R: TCnUInt128; Lo: TUInt64);
begin
  R.Lo64 := Lo;
  R.Hi64 := 0;
end;

procedure UInt128Copy(var D, S: TCnUInt128);
begin
  D.Lo64 := S.Lo64;
  D.Hi64 := S.Hi64;
end;

function UInt128IsZero(var N: TCnUInt128): Boolean;
begin
  Result := (N.Lo64 = 0) and (N.Hi64 = 0);
end;

procedure UInt128SetZero(var N: TCnUInt128);
begin
  N.Lo64 := 0;
  N.Hi64 := 0;
end;

{$WARNINGS OFF}

procedure UInt128Add(var R, A, B: TCnUInt128);
var
  C: Integer;
begin
  UInt64Add(R.Lo64, A.Lo64, B.Lo64, C);
  R.Hi64 := A.Hi64 + B.Hi64 + C;
end;

procedure UInt128Add(var R: TCnUInt128; V: TUInt64);
var
  C: Integer;
begin
  UInt64Add(R.Lo64, R.Lo64, V, C);
  R.Hi64 := R.Hi64 + C;
end;

// ���� 128 λ�޷�������ӣ�A + B => R������������������� 1 ���λ������������
procedure UInt128AddC(var R: TCnUInt128; A, B: TCnUInt128; out Carry: Integer);
begin
  UInt128Add(R, A, B);
  if UInt128Compare(R, A) < 0 then // �޷�����ӣ����ֻҪС����һ������˵�������
    Carry := 1
  else
    Carry := 0;
end;

procedure UInt128Sub(var R, A, B: TCnUInt128);
var
  C: Integer;
begin
  UInt64Sub(R.Lo64, A.Lo64, B.Lo64, C);
  R.Hi64 := A.Hi64 - B.Hi64 - C;
end;

{$WARNINGS ON}

procedure UInt128Mul(var R, A, B: TCnUInt128; ResHi: PCnUInt128);
var
  R0, R1, R2, R3, Lo, T: TCnUInt128;
  C1, C2: Integer;
begin
  UInt64MulUInt64(A.Lo64, B.Lo64, R0.Lo64, R0.Hi64); //       0       0   | R0.Hi64 R0.Lo64
  UInt64MulUInt64(A.Hi64, B.Lo64, R1.Lo64, R1.Hi64); //       0   R1.Hi64 | R1.Lo64    0
  UInt64MulUInt64(A.Lo64, B.Hi64, R2.Lo64, R2.Hi64); //       0   R2.Hi64 | R2.Lo64    0
  UInt64MulUInt64(A.Hi64, B.Hi64, R3.Lo64, R3.Hi64); //   R3.Hi64 R3.Lo64 |    0       0

  T.Lo64 := 0;
  T.Hi64 := R1.Lo64;
  UInt128AddC(Lo, R0, T, C1);

  T.Hi64 := R2.Lo64;
  UInt128AddC(Lo, Lo, T, C2);

  UInt128Copy(R, Lo); // �� 128 λ����Ѿ��õ���

  if (C1 > 0) or (C2 > 0) or (R1.Hi64 > 0) or (R2.Hi64 > 0) or (R3.Lo64 > 0) or (R3.Hi64 > 0) then
  begin
    // ������������ֵҪ�� ResHi^ �У�������û�ṩ�������쳣
    if ResHi = nil then
      raise EIntOverflow.Create('UInt128 Mul Overflow');

    T.Hi64 := 0;
    T.Lo64 := R1.Hi64;
    UInt128Add(ResHi^, R3, T);

    T.Lo64 := R2.Hi64;
    UInt128Add(ResHi^, ResHi^, T);

    T.Lo64 := C1 + C2;
    UInt128Add(ResHi^, ResHi^, T); // �ӽ�λ�������ٳ��������
  end;
end;

procedure UInt128DivMod(var A, B, R, M: TCnUInt128);
var
  Sft: Integer;
  BB: TCnUInt128;
begin
  if UInt128IsZero(B) then
    raise EDivByZero.Create(SDivByZero);

  if UInt128IsZero(A) then
  begin
    UInt128SetZero(R);
    UInt128SetZero(M);
    Exit;
  end;

  if UInt128Compare(A, B) < 0 then
  begin
    UInt128SetZero(R);
    Exit;
  end;

  Sft := 0;
  UInt128Copy(BB, B);  // �� BB ���м���������� R M �ȿ����� A B �����޸Ĺ����г���
  UInt128Copy(M, A);   // �޸��� M��Ҫȷ������û�� A B
  UInt128SetZero(R);   // �޸��� R

  // ����������ͱ��������λ��ͬ�ұȱ�����С
  while (UInt128Compare(BB, M) < 0) and not GetUInt64BitSet(BB.Hi64, 63) do
  begin
    if Sft = 127 then
      Break;

    UInt128ShiftLeft(BB, 1);
    Inc(Sft);
    if UInt128Compare(BB, M) > 0 then
    begin
      UInt128ShiftRight(BB, 1);
      Dec(Sft);
      Break;
    end;
  end;

  // �𲽳�
  while True do
  begin
    if UInt128Compare(BB, M) <= 0 then // �����ƣ�ֻ��Ҫ��һ�Σ�D �����
    begin
      UInt128Sub(M, M, BB);
      UInt128SetBit(R, Sft);

      // �����ʱ M Ϊ 0��ò�ƿ�����������û������
      if UInt128IsZero(M) then
        Exit;
    end;

    if Sft > 0 then
    begin
      UInt128ShiftRight(BB, 1);
      Dec(Sft);
    end
    else
      Break;
  end;
end;

procedure UInt128Div(var R, A, B: TCnUInt128);
var
  T: TCnUInt128;
begin
  UInt128DivMod(A, B, R, T);
end;

procedure UInt128Mod(var R, A, B: TCnUInt128);
var
  T: TCnUInt128;
begin
  UInt128DivMod(A, B, T, R);
end;

procedure UInt128ShiftLeft(var N: TCnUInt128; S: Integer);
var
  T, M: TUInt64;
begin
  if S = 0 then
    Exit;

  if S < 0 then
    UInt128ShiftRight(N, -S);

  if S > 128 then // ȫ������
  begin
    N.Hi64 := 0;
    N.Lo64 := 0;
  end
  else if S > 64 then
  begin
    // Lo Ϊȫ 0
    N.Hi64 := N.Lo64 shl (S - 64);
    N.Lo64 := 0;
  end
  else
  begin
    // ȡ�� Lo �ĸ� S λ
    M := (not TUInt64(0)) shl (64 - S);
    T := N.Lo64 and M;
    T := T shr (64 - S);

    // Lo �� Hi ������ S
    N.Lo64 := N.Lo64 shl S;
    N.Hi64 := N.Hi64 shl S;

    // Lo ���Ƴ��ĸ߲��ַŵ� Hi �����ĵͲ���
    N.Hi64 := N.Hi64 or T;
  end;
end;

procedure UInt128ShiftRight(var N: TCnUInt128; S: Integer);
var
  T, M: TUInt64;
begin
  if S = 0 then
    Exit;

  if S < 0 then
    UInt128ShiftLeft(N, -S);

  if S > 128 then // ȫ������
  begin
    N.Hi64 := 0;
    N.Lo64 := 0;
  end
  else if S > 64 then
  begin
    // Lo Ϊȫ 0
    N.Lo64 := N.Hi64 shr (S - 64);
    N.Hi64 := 0;
  end
  else
  begin
    // ȡ�� Hi �ĵ� S λ
    M := (not TUInt64(0)) shr (64 - S);
    T := N.Hi64 and M;
    T := T shl (64 - S);

    // Lo �� Hi ������ S
    N.Lo64 := N.Lo64 shr S;
    N.Hi64 := N.Hi64 shr S;

    // Hi ���Ƴ��ĵͲ��ַŵ� Lo �����ĸ߲���
    N.Lo64 := N.Lo64 or T;
  end;
end;

procedure UInt128And(var R, A, B: TCnUInt128);
begin
  R.Lo64 := A.Lo64 and B.Lo64;
  R.Hi64 := A.Hi64 and B.Hi64;
end;

procedure UInt128Or(var R, A, B: TCnUInt128);
begin
  R.Lo64 := A.Lo64 or B.Lo64;
  R.Hi64 := A.Hi64 or B.Hi64;
end;

procedure UInt128Xor(var R, A, B: TCnUInt128);
begin
  R.Lo64 := A.Lo64 xor B.Lo64;
  R.Hi64 := A.Hi64 xor B.Hi64;
end;

procedure UInt128Not(var N: TCnUInt128);
begin
  N.Lo64 := not N.Lo64;
  N.Hi64 := not N.Hi64;
end;

procedure UInt128SetBit(var N: TCnUInt128; Bit: Integer);
begin
  if Bit > 63 then
    UInt64SetBit(N.Hi64, Bit - 64)
  else
    UInt64SetBit(N.Lo64, Bit);
end;

procedure UInt128ClearBit(var N: TCnUInt128; Bit: Integer);
begin
  if Bit > 63 then
    UInt64ClearBit(N.Hi64, Bit - 64)
  else
    UInt64ClearBit(N.Lo64, Bit);
end;

function UInt128IsBitSet(var N: TCnUInt128; Bit: Integer): Boolean;
begin
  if Bit > 63 then
    Result := GetUInt64BitSet(N.Hi64, Bit - 64)
  else
    Result := GetUInt64BitSet(N.Hi64, Bit);
end;

function UInt128Equal(var A, B: TCnUInt128): Boolean;
begin
  Result := (A.Lo64 = B.Lo64) and (A.Hi64 = B.Hi64);
end;

function UInt128Equal(var A: TCnUInt128; B: TUInt64): Boolean;
begin
  Result := (A.Lo64 = B) and (A.Hi64 = 0);
end;

function UInt128Compare(var A, B: TCnUInt128): Integer;
var
  T: Integer;
begin
  T := UInt64Compare(A.Hi64, B.Hi64);
  if T > 0 then
    Result := 1
  else if T < 0 then
    Result := -1
  else
  begin
    T := UInt64Compare(A.Lo64, B.Lo64);
    if T > 0 then
      Result := 1
    else if T < 0 then
      Result := -1
    else
      Result := 0;
  end;
end;

function IsUInt128AddOverflow(var A, B: TCnUInt128): Boolean;
var
  R: TCnUInt128;
begin
  UInt128Add(R, A, B);
  Result := UInt128Compare(R, A) < 0;
end;

function UInt128ToHex(var N: TCnUInt128): string;
var
  T, M, Mask: TCnUInt128;
begin
  if UInt128IsZero(N) then
  begin
    Result := '0';
    Exit;
  end;

  UInt128Copy(T, N);
  Result := '';

  UInt128Set(Mask, $F);
  while not UInt128IsZero(T) do
  begin
    UInt128And(M, T, Mask);
    UInt128ShiftRight(T, 4);
    Result := IntToHex(M.Lo64, 1) + Result;
  end;
end;

{$WARNINGS OFF}

function HexToUInt128(const S: string): TCnUInt128;
var
  I, K: Integer;
  St, T: TCnUInt128;
begin
  UInt128SetZero(Result);
  UInt128Set(St, 16);

  for I := 1 to Length(S) do
  begin
    if S[I] in ['0'..'9', 'a'..'f', 'A'..'F'] then
    begin
      UInt128Mul(Result, Result, St);
      K := 0;
      if (S[I] >= '0') and (S[I] <= '9') then
        K := Ord(S[I]) - Ord('0')
      else if (S[I] >= 'A') and (S[I] <= 'F') then
        K := Ord(S[I]) - Ord('A') + 10
      else if (S[I] >= 'a') and (S[I] <= 'f') then
        K := Ord(S[I]) - Ord('a') + 10;

      UInt128Set(T, K);
      UInt128Add(Result, Result, T);
    end
    else
      raise EConvertError.CreateFmt(SInvalidInteger, [S[I]]);
  end;
end;

function UInt128ToStr(var N: TCnUInt128): string;
var
  T, Ten, M: TCnUInt128;
begin
  if UInt128IsZero(N) then
  begin
    Result := '0';
    Exit;
  end;

  UInt128Copy(T, N);
  UInt128Set(Ten, 10);
  Result := '';

  while not UInt128IsZero(T) do
  begin
    UInt128DivMod(T, Ten, T, M);
    Result := IntToStr(M.Lo64) + Result;
  end;
end;

function StrToUInt128(const S: string): TCnUInt128;
var
  I: Integer;
  Ten, T: TCnUInt128;
begin
  UInt128SetZero(Result);
  UInt128Set(Ten, 10);

  for I := 1 to Length(S) do
  begin
    if S[I] in ['0'..'9'] then
    begin
      UInt128Mul(Result, Result, Ten);
      UInt128Set(T, Ord(S[I]) - Ord('0'));
      UInt128Add(Result, Result, T);
    end
    else
      raise EConvertError.CreateFmt(SInvalidInteger, [S[I]]);
  end;
end;

{$WARNINGS ON}

end.
