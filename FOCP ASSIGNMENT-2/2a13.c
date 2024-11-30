#include <stdio.h>

int i;
void rotateClockwiseByOne(int arr[],int n){
    int temp=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void printArray(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1, 2, 3, 4, 5};
    int n=5;

    printArray(arr,n);
    rotateClockwiseByOne(arr,n);
    printArray(arr,n);

    return 0;
}
