program Args;

uses sysutils;

var
    i: integer;

begin
    WriteLn('Number of arguments: ', ParamCount);
    for i := 1 to ParamCount do
    begin
        WriteLn(Format('%2d. %s', [i, ParamStr(i)]));
    end;
end.
