#include <stdio.h>

int i;
void printArray(int arr[], int size) {
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100],size,pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, size);

    for(i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("Array after deleting from front: ");
    printArray(arr,size);

    printf("\nEnter the position (0-based index) to delete from: ");
    scanf("%d", &pos);

    for(i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("Array after deleting from position %d: ", pos);
    printArray(arr,size);

    size--;
    printf("Array after deleting from end: ");
    printArray(arr, size);

    return 0;
}
