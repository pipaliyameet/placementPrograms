#include<stdio.h>
void main(){
    int n=4;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1 ;i<=n ;i++){
        for(int k=i ;k<n ;k++){
            printf(" ");
        }
        for(int j=i ;j>0 ;j--){
            printf("%d",j);
        }
        int m=2;
        while(m<=i){
            printf("%d",m);
            m++;
        }
        printf("\n");
    }
    for(int i=n-1 ;i>0 ;i--){
        for(int k=n-i ;k>0 ;k--){
            printf(" ");
        }
        for(int j=i ;j>0 ;j--){
            printf("%d",j);
        }
        for(int m=2 ;m<=i ;m++){
            printf("%d",m);
        }
        printf("\n");
    }
}