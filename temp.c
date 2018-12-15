#include <stdio.h>
#include <math.h>
#include <cs50.h>

int convertToF(int);

int main(void)
{

    float cels = get_int("What is the temp in Celsius? ");
    int fTemp = convertToF(cels);
    printf("The temp converted to Fahrenheit is %i degrees\n", fTemp);
}

int convertToF(int celsius)
{
    int fahrenheit = (celsius * (9 / 5)) + 32;

    if (fahrenheit != 0)
        return round(fahrenheit);
    else
        return -1;
}