import std.stdio;

void main(string[] args)
{
    writefln("Number of arguments: %d", args.length - 1);
    for (int i = 1; i < args.length; ++i)
    {
        writefln("%2d. %s", i, args[i]);
    }
}
