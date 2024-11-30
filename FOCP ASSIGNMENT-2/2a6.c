#include<stdio.h>

int main(){
    int n,i,sum = 0;
    float average;
   
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of %d students:\n", n);
    for(i=0;i<n;i++){
        printf("Student %d: ",i+1);
        scanf("%d", &marks[i]);
        sum+=marks[i];  
    }

    average=(float)sum/n;

    printf("The average score is: %.2f\n", average);

    return 0;
}

