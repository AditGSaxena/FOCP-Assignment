/*9. WAP to print following Pyramid:
0 0
01 01
010 010
0101 0101
0101001010*/
#include<stdio.h>
void printPyramid(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=0;j<=i;j++){
			printf("%d", j%2);
		}
		printf(" ");
		
		for(j=0;j<=i;j++){
			printf("%d",(j+1)%2);
		}
		
		printf("\n");
	}
}

int main(){
	int n=5;
	printPyramid(n);
	return 0;
}
