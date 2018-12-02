#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Declare the strContains func
int strContains(string, string);

int main(void)
{
    // Prompt user for 2 strings
    string input1 = get_string("Enter the first string: ");
    string input2 = get_string("Enter the second string: ");

    // Call the strContains func with user input
    int result = strContains(input1, input2);
}

// A function the checks a string for a substring
// Is passed 2 strings and returns an int
int strContains(string text1, string text2)
{
    // A counter
    int count = 0;

    // To keep track of how many
    // times a substring is found
    int numOccur = 0;

    // Another counter
    int j;

    // Holds length of first string
    int stringLen = strlen(input1);

    // Holds length of second string
    int subLen = strlen(input2);

    // This for loop iterates
    // through the first array
    for (int i = 0; i < stringLen;)
    {
        // Set j and count to 0
        j = 0;
        count = 0;

        // While the index of both string matches
        while (input1[i] == input2[j])
        {
            // Increment count, i, and j
            count++;
            i++;
            j++;
        }
        // Once count is equal to the length
        // of the second string, a match
        // has been found
        if (count == subLen)
        {
            // Increment numOccur
            numOccur++;

            // Set count back to zero
            count = 0;
        }
        // If no match is found, increment i
        else
            i++;
    }

    // If there multiple occurences of the second
    // string, print a statement and return 2
    if (numOccur > 1)
    {
        printf("This string is full of the word\n");
        return 2;
    }
    // If there is only one occurence of the second
    // string, print a statement and return  1
     else if (numOccur == 1)
    {
        printf("The string exists\n");
        return 1;
    }
    // If the second string does not occur in the
    // first string, print a statement and return 0
    else
    {
        printf("The string does not exist\n");
        return 0;
    }
}
