unit UCrypto;

interface

uses
  System.Classes, Windows, System.SysUtils, System.RTLConsts, System.Hash,
  CnAES;

type

  TCrypto = class(TObject)
  private
    class function crypto_sm4(encdectype: Integer; inputstr, key, outsing: PAnsiChar): Integer;
  public
    ///  sm4 加解密
    class function Encrypt_SM4(AInput: string; AKey: string): string;overload; virtual;  //加密
    class function Decrypt_SM4(AInput: string; AKey: string): string;overload; virtual;  //解密
    ///  SHA 加解密
    class function HMAC_SHA1(const data, Key: string): string;
    class function HMAC_SHA256(const data, Key: string): string;
    class function SHA1(const data: string): string;
    class function SHA256(const data: string): string;
    ///  RSA 加解密
    class function RSA_Encrypt(const data, Key: string): string;
    class function RSA_Decrypt(const data, Key: string): string;
    ///  AES 加解密
    class function AES_Encrypt(const data, key: AnsiString; InitVector: AnsiString = ''): string;
    ///  sm4 加解密
    class function SM4_Encrypt(const data, Key: string): string;
    class function SM4_Decrypt(const data, Key: string): string;
    ///SM3
    class function SM3(inputstr: string): string;
    class function HMAC_SM3(const data, Key: string): string;
  end;

  Tcrypto_sm4 = function(encdectype: Integer; inputstr: PAnsiChar; key: PAnsiChar; outsing: PAnsiChar): Integer; stdcall;

implementation

uses
  UComvar, IdHashSHA, IdGlobal, CnSM3, System.Math;

{ TCrypto }

class function TCrypto.AES_Encrypt(const data, key: AnsiString; InitVector: AnsiString): string;
var Source,Dest: TStream;
    cnVector: TCnAESBuffer;
    cnKey: TCnAESKey128;
begin
  //偏移量
  FillChar(cnVector, SizeOf(cnVector), 0);
  Move(PAnsiChar(InitVector)^, cnVector, Min(SizeOf(cnVector), Length(InitVector)));
            //AESEncryptEcbStrToHex
  Result := AESEncryptCbcStrToHex(UTF8Encode(data),UTF8Encode(key),cnVector,kbt192);
end;

class function TCrypto.crypto_sm4(encdectype: Integer; inputstr, key, outsing: PAnsiChar): Integer;
var
  vdll: THandle;
  FPointer: Pointer;
  Myfun: Tcrypto_sm4;
begin
  Result:=0;
  vdll := LoadLibrary(PChar(Goo.SystemPath+'\cryptodll.dll'));
  try
    FPointer := GetProcAddress(vdll, PAnsiChar('crypto_sm4base64')); //取函数的地址。
    if FPointer <> nil then //如果函数存在就调用
    begin
      Myfun := Tcrypto_sm4(FPointer);
      Result := Myfun(encdectype, inputstr, key, outsing);
    end;
  finally
    FreeLibrary(vdll);
  end;
end;

class function TCrypto.Decrypt_SM4(AInput, AKey: string): string;
const
  RETLEN = 1024 * 1024 * 5;
var
  rstpchar: PAnsiChar;
begin
  rstpchar := AllocMem(RETLEN);
  try
    TCrypto.crypto_sm4(0, PAnsiChar(AnsiString(AInput)), PAnsiChar(AnsiString(AKey)), rstpchar);
    Result := StrPas(rstpchar);
  finally
    FreeMem(rstpchar);
  end;
end;

class function TCrypto.Encrypt_SM4(AInput, AKey: string): string;
const
  RETLEN = 1024 * 1024 * 5;
var
  rstpchar: PAnsiChar;
begin
  rstpchar := AllocMem(RETLEN);
  try
    TCrypto.crypto_sm4(1, PAnsiChar(AnsiString(AInput)), PAnsiChar(AnsiString(AKey)), rstpchar);
    Result := StrPas(rstpchar);
  finally
    FreeMem(rstpchar);
  end;
end;

class function TCrypto.HMAC_SHA1(const data, Key: string): string;
begin
  Result := THashSHA1.Create.GetHMAC(data, key);
end;

class function TCrypto.HMAC_SHA256(const data, Key: string): string;
begin
  Result := THashSHA2.Create.GetHMAC(data, key);
end;

class function TCrypto.HMAC_SM3(const data, Key: string): string;
var
  Output: TCnSM3Digest;
begin
  var _len := Length(TEncoding.UTF8.GetBytes(data));
  SM3Hmac(PAnsiChar(AnsiString(key)),Length(AnsiString(key)),PAnsiChar(UTF8Encode(data)),_len,Output);
  Result := SM3Print(Output);
end;

class function TCrypto.RSA_Decrypt(const data, Key: string): string;
begin

end;

class function TCrypto.RSA_Encrypt(const data, Key: string): string;
begin

end;

class function TCrypto.SHA1(const data: string): string;
begin
  with TIdHashSHA1.Create do
  try
    Result := HashBytesAsHex(TidBytes(Bytesof(data)));
  finally
    Free;
  end;
end;

class function TCrypto.SHA256(const data: string): string;
begin
  with TIdHashSHA256.Create do
  try
    Result := HashBytesAsHex(TidBytes(Bytesof(data)));
  finally
    Free;
  end;
end;

class function TCrypto.SM3(inputstr: string): string;
var
  Output: TCnSM3Digest;
begin
  Output := SM3String(inputstr);
  Result := SM3Print(Output);
end;

class function TCrypto.SM4_Decrypt(const data, Key: string): string;
begin

end;

class function TCrypto.SM4_Encrypt(const data, Key: string): string;
begin

end;

end.
