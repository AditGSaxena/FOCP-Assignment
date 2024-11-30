#include <stdio.h>

int main() {
    int n,i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    
    printf("Enter the marks of %d students: \n", n);
    for(i=0;i<n;i++){
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for(i=0;i<n;i++){
        if(marks[i]>=75){
o            printf("Student %d: Grade A\n", i+1);
        } else if(marks[i]>=60 && marks[i]<=74){
            printf("Student %d: Grade B\n", i+1);
        } else if(marks[i]>=40 && marks[i]<=59){
            printf("Student %d: Grade C\n", i+1);
        } else {
            printf("Student %d: Grade D\n", i+1);
        }
    }

    return 0;
}

