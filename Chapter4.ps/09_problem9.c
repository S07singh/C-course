#include<stdio.h>

int main(){
    // 8! = 1X2X3X4X5X6X7X8
    int i = 1;
    int product =1;
    int n = 5;
   while(i<=n)
    {
        product *=i;
        i++;
    }
     printf("The factorial of %d is %d ",  n, product);
    return 0;
}