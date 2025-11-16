#include<stdio.h>
void main(){
    int n=6;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=0 ;i<n ;i++){
        printf("1");
        for(int k=i ;k+1>=2 ;k--){
            if(k+1==2){
                printf("%d",i+1);
                continue;
            }
            printf("*");
        }
        for(int j=i ;j+1>=2 ;j--){
            if(j+1==2){
                printf("1");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
}