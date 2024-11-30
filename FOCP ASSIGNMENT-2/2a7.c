#include<stdio.h>

int main(){
    int n,i;
    
    printf("Enter the number of scores: ");
    scanf("%d", &n);
    
    int scores[n];
    
    printf("Enter the scores:\n");
    for(i=0;i<n;i++){
        scanf("%d", &scores[i]);
    }
    
    for(i=0;i<n;i++){
        if(scores[i]%2==0){
            printf("Score %d is Even\n", scores[i]);
        }else{
            printf("Score %d is Odd\n", scores[i]);
        }
    }
    
    return 0;
}
