#include <stdio.h>

int i;
int isPrime(int num){
    if(num<=1){
        return 0;
    }
    
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n,count=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("The number of prime numbers in the array is: %d\n", count);

    return 0;
}
