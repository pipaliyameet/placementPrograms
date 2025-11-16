#include<stdio.h>

int factorial(int num){
    if(num==0 || num==1) return 1;
    return num*(factorial(num-1));
}
void main(){
    int n=6;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=0 ;i<=n ;i++){
        for(int k=i ;k<=n ;k++){
            printf(" ");
        }
        for(int j=0 ;j<=i ;j++){
            int ans = ((factorial(i))/((factorial(j))*((factorial(i-j)))));
            printf("%d ",ans);
        }   
        printf("\n");
    }
}
 