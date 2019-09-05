#include "main.h"

int main(int argc, char *argv[])
{
    int c;

    printf("%12s|%12s|%12s\n", "Celsius", "Kelvin", "Fahrenheit");
    printf("%12s+%12s+%12s\n", DIVIDER, DIVIDER, DIVIDER);
    for (c = START; c <= END; c += STEP)
        printf("%12d|%12.2f|%12.2f\n", c, KELVIN(c), FAHRENHEIT(c));

    return EXIT_SUCCESS;
}
