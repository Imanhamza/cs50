#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int key, string array[])
{
    if (key == 2 && isdigit(*array[1]))
    {
        string input = get_string("Input your plain text: ");
        int output = 0;
        for (int i = 0, n = strlen(input) ; i < n ; i++)
        {
            //check if the input alpaphitic or not
            if (isalpha(input[i]))
            {
                //cipher the lower case letters
                if (islower(input[i]))
                {
                    input[i] = (input[i] + atoi(array[1]) - 97) % 26 + 97;
                }
                // cipher the upper case letters
                else if (isupper(input[i]))
                {
                    input[i] = (input[i] + atoi(array[1]) - 65) % 26 + 65;
                }
            }
            // keep the spaces and numbers and punct as the same
            else
            {
                input[i] = input[i];
                printf("%c", input[i]);
            }
        }
        printf("ciphertext: %s\n",  input);
    }
    // check presence of key
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
