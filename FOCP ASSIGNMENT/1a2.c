//2. WAP to read two integers and print their HCF (Highest Common Factor).
#include<stdio.h>

int hcf(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);  

    printf("Enter num2: ");
    scanf("%d", &num2);  

    
    printf("HCF is %d\n", hcf(num1, num2));  

    return 0;
}

