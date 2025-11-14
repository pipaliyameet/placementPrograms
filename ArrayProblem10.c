#include<stdio.h>
void main(){
    int n ,element ,position;
    printf("Enter langth : ");
    scanf("%d",&n);
    
    int arr[n+1];
    for(int i=0 ;i<n ;i++){
        printf("Enter element no : ");
        scanf("%d",&arr[i]);
    }

    printf("Enter element who you insert : ");
    scanf("%d",&element);
    printf("Enter Position : ");
    scanf("%d",&position);
    position--;
    if(position>n){
        printf("Your position is invalid");
        return;
    }

    for(int i=n ;i>=position ;i--){
        arr[i+1]= arr[i];
    }
    arr[position]=element;

    for(int i=0 ;i<n+1 ;i++){
        printf("%d ,",arr[i]);
    }
}