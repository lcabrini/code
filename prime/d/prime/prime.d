import std.stdio;
import std.math;

void main()
{
    uint n;

    write("Enter a positive integer: ");
    readf("%s", n);
    writef("%d %s a prime.\n", n, is_prime(n) ? "is" : "is not");
}

bool is_prime(uint n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= sqrt(real(n)); ++i)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
