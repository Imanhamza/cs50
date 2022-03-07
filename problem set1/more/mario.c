#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Enter height of the pyramids: ")  ;
    }
    while (h > 8 || h < 1);
    
    // loop for implement the spaces and the hashes
    
    for (int i = 0; i < h; i++)
    {
        //for left spaces
        for (int n = h - (i + 1) ; n > 0; n--)
        {
            printf(" ");
        }
        //for  left hashes
        for (int r = 0; r < i + 1; r++)
        {
            printf("#");
        }
        // for the space between them
        for (int b = 0; b < 2; b++)
        {
            printf(" ");
        }
        // right hashes
        for (int r = 0; r < i + 1; r++)
        {
            printf("#");
        }
        printf("\n");
    }
}
