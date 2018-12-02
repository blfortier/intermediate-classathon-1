#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Declare the sumFibs function
int sumFibs(int);

int main(int argc, string argv[])
{
    // Check for command line args
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Put in a command line argument!\n");
        return 1;
    }

    // Store the CL arg as an int
    int num = atoi(argv[1]);

    // Call the sumFibs func and
    // store in result
    int result = sumFibs(num);

    // Print result
    printf("%d\n", result);
}

// The sumFibs function
// returns an int and accepts
// an int as it's parameter
// Sums all odd fib numbers
// up to the passed int
int sumFibs(int num)
{
    // The first fibonacci num
    int first = 1;

    // The seconf fib num
    int second = 1;

    // To store the third fib num
    int third = 0;

    // Holds sum of all
    // off fib nums
    int result = 2;

    // If num is = 0,
    // return 0, if num
    // is = 1, return 1
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;

    // Cycle from the third
    // fib number to num
    for (; third <= num;)
    {
        // If third is odd,
        // add it to result
        if (third % 2 != 0)
            result += third;

        // The value of third is equal
        // to the value of first + second
        third = first + second;

        // The values for first and
        // second are shifted, being replaced
        // by the value of the next num
        first = second;
        second = third;
    }

    // return result
    return result;
}