#include<stdio.h>

void main(){
    int n ,count=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0 ;i<n ;i++){
        for(int j=i ;j<=n ;j++){
            arr[j][i]=count++;
        }
        count--;
    }
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<=i ;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}