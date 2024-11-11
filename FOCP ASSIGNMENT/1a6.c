/*6.WAP to accept a coordinate point in an XY coordinate system and determine in which
quadrant the coordinate point lies.
Test Data: 7 9
Expected Output: The coordinate point (7,9) lies in the First quadrant.*/
#include<stdio.h>

int main(){
	int x,y;
	
	printf("Enter the coordinate x: ");
	scanf("%d", &x);
	printf("Enter the coordinate y: ");
	scanf("%d", &y);
	
	if(x>0 && y>0){
		printf("The coordinates %d,%d lies in the first quadrant\n", x,y);
	}
	else if(x<0 && y>0){
		printf("The coordinates %d,%d lies in the second quadrant\n", x,y);
	}
	else if(x<0 && y<0){
		printf("The coordinates %d,%d lies in the third quadrant\n", x,y);
	}
	else if(x>0 && y<0){
		printf("The coordinates %d,%d lies in the fourth quadrant\n", x,y);
	}
	else if(x!=0 && y==0){
		printf("The coordinates %d,%d lies in the X-axis\n", x,y);
	}
	else if(x==0 && y!=0){
		printf("The coordinates %d,%d lies in the Y-axis\n", x,y);
	}
	else{
		printf("The coordinates %d,%d lies at the origin\n", x,y);
	}
	
	return 0;
}
