#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Declare the checkPrime func
int checkPrime(int);

// Declare the sumPrimes func
int sumPrimes(int);

int main(int argc, string argv[])
{
    // Check for the CL argument
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Put in a command line argument!\n");
        return 1;
    }

    // Convet passed argument
    // as int and store in arg
    int arg = atoi(argv[1]);

    // Call the sumPrimes func and
    // store result in var result
    int result = sumPrimes(arg);

    // Print result
    printf("%i\n", result);
}

// checkPrimes func is passed
// an int and also returns an int.
// It checks for prime numbers
// up to the passed int
int checkPrime(int num)
{
    // Starting at 2 (the first prime number)
    // loop through the numbers and return
    // false if NOT prime and true IF prime
    for (int i = 2; i < num; i++)
    {
        if (!(num % i))
            return false;
    }

    return true;
}

// sumPrimes is passed an int
// and return an int. It sums
// all the prime numbers up to max
int sumPrimes(int max)
{
    // Store the sum
    int sum = 0;

    // Starting at the first prime number 2,
    // loop through numbers up to and including
    // max. If it is a prime, add it's value to sum
    for (int i = 2; i <= max; i++)
    {
        if(checkPrime(i))
            sum += i;
    }

    // Return the sum of prime numbers
    return sum;

}

