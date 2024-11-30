#include <stdio.h>

int main(){
    int i,j,n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int foundDuplicate=0;

    printf("Duplicates: ");
    for(i=0;i<n;i++){
        
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                foundDuplicate=1;
                break;  
            }
        }
    }

    if(!foundDuplicate){
        printf("-1");
    }

    printf("\n");

    return 0;
}
