#include<stdio.h>
void main(){
    int n;
    printf("Enter A number : ");
    scanf("%d",&n);
    int sqr = n*n ,temp =n ,count=0;
    while(temp>0){
        count++; 
        temp /= 10;
    }
    temp=0;
    int temp2 =sqr;
    for(int i=0 ;i<count ;i++){
        temp = temp*10 + (temp2%10);
        temp2 /= 10;
    }
    temp2=0;
    while(temp>0){
        temp2 = temp2*10 + (temp%10);
        temp /= 10;
    }
    if(temp2 == n) printf("Given number is automorphic");
    else printf("Given number is not automorphic");
}