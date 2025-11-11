#include<stdio.h>
void main(){
    int n ,on=0 ,mainOn=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        on = (on*10) + (n%8);
        n/=8;
        printf("num = %d\n",n);
    }
    while(on>0){
        mainOn = (mainOn*10) + (on%10);
        on/=10;
    }
    printf("Your octal number is : %d",mainOn);
}