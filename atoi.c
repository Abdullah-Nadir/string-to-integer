#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input)+1);
}

int convert(string input)
{
    // Initializing variable
    int l = strlen(input);
    int n = 0;

    // Base Case
    if (l == 1)
    {
        n = (input[l - 1] - '0');
        return n;
    }

    // Recursive Case
    n = (input[l - 1] - '0');

    input[l - 1] = '\0';
 
    return n + 10 * convert(input);
}

