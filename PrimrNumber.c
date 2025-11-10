#include<stdio.h>
void main(){
    int n ,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=2 ;i<n/2 ;i++){
        if(n%i==0){
            printf("Number is not prime");
            count++;
            break;
        }
    }
    if(count==0) printf("Number is prime");
}