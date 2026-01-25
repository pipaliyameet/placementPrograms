#include<stdio.h>
void main(){
    int n;
    printf("Enter length : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0 ;i<n ;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0 ;i<n ;i++){
        printf("\n%d",arr[i]);
    }
}