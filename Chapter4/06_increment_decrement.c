#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);   //5

    i =i+ 5; //10
    printf("The value of i is %d\n", i);   //10
    
    printf("The value of i is %d\n", i++);  //10
    printf("The value of i is %d\n", i);    //11

    // i++ prints i first and then increments i (post increment Operator)
    // ++i increments i first and then prints i (pre increment Operator)

    i +=2; // Same as i = i+2;
    printf("The value of i is %d\n", i);  //13
    return 0;
}