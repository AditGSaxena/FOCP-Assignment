//3. WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include <stdio.h>

int subtract(int a,int b){
    return a+(~b+1);
}

int main(){
    int a,b;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    
    printf("The result of %d-%d is: %d\n", a,b, subtract(a,b));
    
    return 0;
}
