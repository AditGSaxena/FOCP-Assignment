#include <stdio.h>

int main() {
	int i;
    int arr[100],size=0,value,position;

    printf("Before Insert at Front: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter value to insert at the front: ");
    scanf("%d", &value);

    for(i=size;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    size++;

    printf("After Insert at Front: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nBefore Insert at Position: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter position to insert at: ");
    scanf("%d", &position);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i=size;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    size++;

    printf("After Insert at Position: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nBefore Insert at End: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter value to insert at the end: ");
    scanf("%d", &value);
    
    arr[size]=value;
    size++;

    printf("After Insert at End: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
