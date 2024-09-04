#include<stdio.h>

int main(){
    // 8! = 1X2X3X4X5X6X7X8
    int product =1;
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        product  *=i;
    }
     printf("The factorial is %d", product);
    return 0;
}