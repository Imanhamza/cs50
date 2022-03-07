#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    //  Prompt the change value
    float change;
    do
    {
        change = get_float("Type your change in dollars: ");
    }
    while (change < 0);
    // convert change into cents
    int result = round(change * 100);
    //loop for counting the coins
    int i = 0;
    // main loop for big number (Quaeters)
    while (result >= 25 || result >= 10 || result >= 5 || result >= 1)
    {
        while (result >= 25)
        {
            result = result - 25;
            i++;
        }
        //loop for dimes
        while (result >= 10 & result < 25)
        {
            result = result - 10;
            i++;
        }
        //loop for nickles
        while (result >= 5 & result < 10)
        {
            result = result - 5;
            i++;
        }
        //loop for pennies
        while (result >= 1 & result < 5)
        {
            result = result - 1;
            i++;
        }
    }
 
    printf("%i\n", i);
}
