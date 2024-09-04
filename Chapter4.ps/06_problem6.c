#include <stdio.h>

int main()
{
    // USING DO WHILE LOOP:
    // int i = 1;
    // int sum = 0;
    // do{
    //     sum += i; // Add the value of i to sum
    //     i++;
    // } while (i <= 10);

    // USING FOR LOOP:
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("The sum of the first 10 natural numbers is %d", sum);
    return 0;
}