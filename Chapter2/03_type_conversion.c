#include <stdio.h>

int main()
 {
    float a = 9.0;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is %f\n", c);
    // int and int -> int, int and float -> float,float and float -> float
    // 5/2 becomes 2 as both the operands are int
    // 5.0/2 becomes 2.5 as one the of the operands is float
    // 2/5 becomes 0 as both the operands are int
    int e;
    scanf("%d",&e);
    printf("The value of a is %d", e);
    return 0;
}