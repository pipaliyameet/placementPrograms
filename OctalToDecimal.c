#include<stdio.h>
#include<math.h>
void main(){
    int n, dn=0 ,i=0;
    printf("Enter number : ");
    scanf("%d",&n);
    while(n>0){
        dn = (dn + ((n%10)*(pow(8,i++))));
        n/=10;
    }
    printf("Your decimal number is : %d",dn);
}