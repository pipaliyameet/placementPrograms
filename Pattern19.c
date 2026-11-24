#include<stdio.h>
void main(){
    int n=5 ;
    printf("Enter number : ");
    scanf("%d",&n);
    int arr[n][n] ,count=1;
    for(int i=0 ;i<n ;i++){
        if(i%2==0){
            for(int j=0 ;j<n ;j++){
                arr[i][j]=count++;
            }
        }
        else{
            for(int j=n-1 ;j>=0 ;j--){
                arr[i][j]=count++;
            }
        }
    }
    
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<n ;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

// Enter number : 7
// 1 2 3 4 5 6 7 
// 14 13 12 11 10 9 8 
// 15 16 17 18 19 20 21 
// 28 27 26 25 24 23 22 
// 29 30 31 32 33 34 35 
// 42 41 40 39 38 37 36 
// 43 44 45 46 47 48 49 