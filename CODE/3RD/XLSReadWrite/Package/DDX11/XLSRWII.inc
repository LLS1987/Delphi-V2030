{$I Axcompilers.inc}

{$Q-}
{$R-}

{.$define COMPILE_LAZARUS}
{.$define BABOON}
{.$define DEMO_TIMELIMIT}
{$ifndef DELPHI_7}
  {$define EDIT_REFS}
{$endif}

{$define XLSRWII}
{$ifndef BABOON}
  {$ifndef COMPILE_LAZARUS}
    {$define XLS_BIFF}
  {$endif}
{$endif}
{$define XLS_XSS}
{.$define AXLINUX}

{$ifdef DELPHI_XE_OR_LATER}
  {$ifndef COMPILE_LAZARUS}
    {$ifndef OSX}
      {$define XLS_CRYPTO_SUPPORT}
    {$endif}
  {$endif}
{$endif}

{$ifdef DELPHI_7}
  {$ifndef COMPILE_LAZARUS}
    {$define XLS_CRYPTO_SUPPORT}
  {$endif}
{$endif}

{$ifndef BABOON}
{$ifndef COMPILE_LAZARUS}
  {$define XLS_HAS_METAFILE_SUPPORT}
{$endif}
  {$ifdef DELPHI_2009_OR_LATER}
    {$define XLS_HAS_PNG_SUPPORT}
    {$define XLS_HAS_JPG_SUPPORT}
  {$endif}
{$endif}

{$ifndef COMPILE_LAZARUS}
  {$ifndef BABOON}
    {$define AX_HAS_WINDOWS}
    {$define AX_HAS_TRICHEDIT}
  {$endif}
{$endif}

{$ifdef DELPHI_XE5_OR_LATER}
  {$ifndef COMPILE_LAZARUS}
    {$define AX_HAS_UITYPES}
  {$endif}
{$endif}
