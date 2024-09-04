#include<stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 10) {
        sum += i;  // Add the value of i to sum
        i++;
    }
    printf("The sum of the first 10 natural numbers is %d", sum);
    return 0;
}
