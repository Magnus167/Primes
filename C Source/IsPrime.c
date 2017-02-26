#include "cs50.h"
#include "cs50.c"
#include <stdio.h>





int is_prime(int num)
{
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    int i=0;
    for(i = 3; i < num / 2; i+= 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main (void)
{
    printf("Enter an integer to check if it is a prime or not... Press CTRL+C to quit \n");
    int inpx = 0;
    do
    {

        inpx = GetInt();
        if (is_prime(inpx) == 1)
        {
            printf("YES! This number is a prime! \n");
        }
        else
        {

            printf("NO! Sorry this is not a prime number! \n");
        }
    }
    while (0==0);

}

