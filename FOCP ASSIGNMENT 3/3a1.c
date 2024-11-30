#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic value\n");
    printf("6. Square root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice>=1 && choice<=4){
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if(choice==1){
            printf("Result: %.2lf\n", num1+num2);
        }
        else if(choice==2){
            printf("Result: %.2lf\n", num1-num2);
        }
        else if (choice==3){
            printf("Result: %.2lf\n", num1*num2);
        }
        else if(choice==4){
            if(num2!=0){
                printf("Result: %.2lf\n", num1/num2);
            } else {
                printf("Error: Division by zero!\n");
            }
        }
    }
    else if(choice==5){
        printf("Enter a number: ");
        scanf("%lf", &num1);
        if(num1>0){
            printf("Logarithmic value: %.2lf\n", log(num1));
        } else {
            printf("Error: Logarithm is not defined for non-positive numbers.\n");
        }
    }
    else if(choice==6){
        printf("Enter a number: ");
        scanf("%lf", &num1);
        if(num1>=0){
            printf("Square root: %.2lf\n", sqrt(num1));
        } else {
            printf("Error: Cannot compute square root of negative numbers.\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
