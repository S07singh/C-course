#include<stdio.h>

int main(){
    int age = 45;

    if(age>60){
    printf("You can drive and you are a senior citizen");
    }  
    else if(age>40){
    printf("You can drive and you are elder");
    } 
     else if(age>18){        // Using if, else if, else reduces indents,also there can be number of "else if",last else executed only when all condition fail to execute.
    printf("You can drive");
    }  
    else{
        printf("You cannot drive");   // last else is optional, you can remove it 
    }
    return 0;
}