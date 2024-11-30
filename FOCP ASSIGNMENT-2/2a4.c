#include<stdio.h>

int main(){
    int n,i;
    int count=0; 

    printf("Enter the number of students: ");
    scanf("%d",&n);

    int marks[n];

    printf("Enter the marks of %d students:\n", n);
    for(i=0;i<n;i++){
        printf("Student %d: ",i+1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99 are:\n");
    for(i=0;i<n;i++){
        if(marks[i]==99){
            printf("Student %d\n",i+1);
            count++;  
        }
    }

    if(count==0){
        printf("\nNo students scored 99.\n");
    }else{
        printf("\nTotal number of students who scored 99: %d\n", count);
    }

    return 0;
}

