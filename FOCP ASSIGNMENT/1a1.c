//1. WAP to check whether a given is Armstrong or not.
#include<stdio.h>
#include<math.h>

int main(){
	int num,temp,remainder,sum=0,digits=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	temp=num;
	
	while(temp!=0){
		temp/=10;
		digits++;
	}
	
	temp=num;
	
	while(temp!=0){
		remainder=temp%10;
		sum+=pow(remainder,digits);
		temp/=10;
	}
	
	if(sum==num){
		printf("It is an Armstrong number\n", num);
	}
	else{
	    printf("It is not an Armstrong number\n", num);
	}
	
	return 0;
}	
