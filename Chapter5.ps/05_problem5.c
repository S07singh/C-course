#include<stdio.h>

int main(){
    int a =4;
    printf("%d %d %d \n", a, ++a, a++);
    // 4,5,5(left to right) and 6,6,4(rigth to left) both are correct because evaluation order not given
    return 0;
}