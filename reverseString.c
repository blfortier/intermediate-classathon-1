#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Enter a string: ");
    string text = get_string();

    // Loop through the string text
    for (int i = strlen(text); i >= 0; i--)
    {
        // Once a space is reached, print next character
          printf("%c", text[i]);
    }

    // Print a new line
    printf("\n");

}