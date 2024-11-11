//10. WAP to print Pascal’s Triangle.
#include<stdio.h>

long long factorial(int n){
	int i;
	long long fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}

long long bionomialCoefficient(int n,int r){
	return factorial(n)/(factorial(r) * factorial(n-r));
}

void printPascalsTriangle(int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%lld", bionomialCoefficient(i,j));
		}
		printf("\n");
	}
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
