/*7. WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per
user’s choice.*/
#include<stdio.h>
int binaryToDecimal(int binary){
	int decimal=0,base=1,remainder;
	
	while(binary>0){
		remainder=binary%10;
		decimal=decimal+remainder*base;
		binary=binary/10;
		base=base*2;
	}
	return decimal;
}

void decimalToBinary(int decimal){
	if(decimal==0){
		printf("0\n");
		return;
	}
	
	int binary[32];
	int i,j=0;
	
	while(decimal>0){
		binary[i]=decimal%2;
		decimal=decimal/2;
		i++;
	}
	
	printf("Binary equivalent: ");
	for(j=i-1;j>=0;j--){
		printf("%d",binary[j]);
	}
	printf("\n");
}

int main() {
    int choice,number;
    
	printf("Choose the conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Enter a binary number: ");
			scanf("%d", &number);
			printf("Decimal equivalent: %d\n", binaryToDecimal(number));
			break;
		case 2:
		    printf("Enter a decimal number: ");
			scanf("%d", &number);
			decimalToBinary(number);
			break;
		default:
		    printf("Invalid choice! Please choose 1 or 2\n");
		}
	return 0;
}
