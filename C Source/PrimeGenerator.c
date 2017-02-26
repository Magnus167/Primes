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
    int outz = 0;
    int numx = 0;
    int counter = 0;
    printf("Enter the number of prime numbers you want...\n");
    numx = GetInt();
    do
    {
        if (is_prime(counter) == 1)
        {
            outz = outz + 1;
            printf(">>%i %c %i / %i \n",counter,(9),outz,numx);
        }
        counter = counter + 1;
    }
    while (outz < numx);

    string apple;
    printf("Press enter to exit...");
    apple = GetString();

}

