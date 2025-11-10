#include<stdio.h>
void main(){
    int n ,count=0;
    printf("Enter A number : ");
    scanf("%d",&n);

    for(int i=0 ;i<=n/2 ;i++){
        int ans = i * (i+1);
        if(ans==n){
            printf("This number is Pronic");
            count++;
            break;
        } 
    }
    if(count==0) printf("This number is not Pronic");
}