#include <cs50.h>
#include <stdio.h>

// Declare the factorialize function
long long factorialize(int);

int main(int argc, string argv[])
{
    // Check for comman line arguments
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Put in a command line argument!\n");
        return 1;
    }

    // convert given argument to integer
    // store in a variable called arg
    int arg = atoi(argv[1]);

    // call the factorialize function and
    // store in result
    long long result = factorialize(arg);

    // print result
    printf("%lli\n", result);
}

// A function the returns a long long
// Accepts an int as a parameter,
// finds the factorial of of passed int
long long factorialize(int fact)
{
    // If the given number is a
    // 0 or 1, return 1. If the
    // number is a negative, return
    // -1. If a postive number is
    // passed, use recursion to
    // find te factorial
    if (fact == 0 || fact == 1)
        return 1;
    else if (fact < 0)
        return -1;
    else
        return (fact * factorialize(fact - 1));
}