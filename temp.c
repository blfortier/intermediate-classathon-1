#include <stdio.h>
#include <math.h>
#include <cs50.h>

int convertToF(int);

int main(void)
{

    int cels = get_int("What is the temp in Celsius? ");
    int fTemp = convertToF(cels);
    printf("The temp converted to Fahrenheit is %i degrees\n", fTemp);
}

int convertToF(int celsius)
{
    float fahrenheit = (celsius * 1.8) + 32.0;
    int rounded = round(fahrenheit);


    if (fahrenheit != 0)
        return rounded;
    else
        return -1;
}