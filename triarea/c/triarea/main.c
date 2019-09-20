#include "main.h"

int main(int argc, char *argv[])
{
    float b, h;

    printf("Enter the length of the base: ");
    scanf("%f", &b);
    printf("Enter the height: ");
    scanf("%f", &h);
    printf("The area of the triangle is %.2f\n", area(b, h));

    return EXIT_SUCCESS;
}

float area(float b, float h)
{
    return b * h / 2.0;
}
