//4. WAP to accept two integer numbers and swap them using 4 different methods in C language.
#include <stdio.h>

void swapUsingTemp(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapUsingArithmetic(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void swapUsingXOR(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void swapUsingSingleStatement(int *x, int *y) {
    *x = *x + *y - (*y = *x);
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swapUsingTemp(&a, &b);
    printf("After swap using temp: a = %d, b = %d\n", a, b);
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    swapUsingArithmetic(&a, &b);
    printf("After swap using arithmetic: a = %d, b = %d\n", a, b);
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    swapUsingXOR(&a, &b);
    printf("After swap using XOR: a = %d, b = %d\n", a, b);
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    swapUsingSingleStatement(&a, &b);
    printf("After swap using single statement: a = %d, b = %d\n", a, b);
    
    return 0;
}

