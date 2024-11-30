#include <stdio.h>

int main(){
	int i;
    int marks[]={88, 92, 99, 76, 99, 85, 91}; 
    int size=sizeof(marks) / sizeof(marks[0]); 
    int found=-1;

    for(i=0;i<size;i++){
        if(marks[i]==99){
            found=i;
            break;
        }
    }

    if(found!=-1){
        printf("The first occurrence of 99 is at index %d.\n",found);
    } else {
        printf("99 is not found in the array.\n");
    }

    return 0;
}

