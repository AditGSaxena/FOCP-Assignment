/*8. WAP to print below mentioned pattern:
1
01
101
0101
10101*/
#include<stdio.h>
int main(){
	int n=5,i,j;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
