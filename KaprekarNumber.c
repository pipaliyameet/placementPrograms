#include<stdio.h>
void main(){
    int n;
    printf("Enter A number : ");
    scanf("%d",&n);
    int sqr = n*n ,temp =sqr ,count=0;

    while(temp>0){
        count++; 
        temp /= 10;
    }
    temp=sqr;
    int p1=0 ,p2=0;
    for(int i=0 ;i<count/2;i++){
        p1 = p1*10+(temp%10);
        temp/=10;
    }
    p2=temp;
    temp=p1;
    p1=0;
    while(temp>0){
        p1=p1*10+(temp%10);
        temp/=10;
    }
    if(p1+p2==n) printf("Given number is kaprekar number");
    else printf("Given number is not kaprekar number");
}