/*5. WAP to check whether number is Perfect Number or not.
(To check perfect number, we have to find all divisors of that number and find their sum, if
sum of divisors is equal to number it means number is Perfect Number.)*/
#include <stdio.h>

int isPerfectNumber(int num){
    int i,sum=0;

    for (i=1;i<=num/2;i++) {
        if (num%i==0)
		{
            sum+=i; 
        }
    }
	  return sum==num;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfectNumber(number)) {
        printf("%d is a Perfect Number\n", number);
    } 
	else {
        printf("%d is not a Perfect Number\n", number);
    }

    return 0;
}

