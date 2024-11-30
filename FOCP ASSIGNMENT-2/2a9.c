#include <stdio.h>

int main() {
	int i;
    int arr[] = {1, 4, 27, 6, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(n==1){
        printf("Peak element is at index 0 and its value is %d\n", arr[0]);
        return 0;
    }

    if(arr[0]>=arr[1]){
        printf("Peak element is at index 0 and its value is %d\n", arr[0]);
        return 0;
    }

    if(arr[n-1]>=arr[n-2]){
        printf("Peak element is at index %d and its value is %d\n", n-1, arr[n-1]);
        return 0;
    }

    for(i=1;i<n-1;i++){
        if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            printf("Peak element is at index %d and its value is %d\n", i, arr[i]);
            return 0;
        }
    }

    return 0;
}
