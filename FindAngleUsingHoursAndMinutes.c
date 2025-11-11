#include<stdio.h>
void main(){
    int hours ,minutes ,angle;
    printf("Enter hours : ");
    scanf("%d",&hours);
    printf("Enter minutes : ");
    scanf("%d",&minutes);
    angle = (0.5)*((60 *hours)-(11*minutes));
    printf("Your angle is : %d",angle);
}