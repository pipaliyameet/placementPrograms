#include <stdio.h>

void main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<=i ;j++){
            if(i==j || i==0 || j==0){
                printf("%d ",1);
                continue;
            }
            printf("%d ",(i+j));
        }
        printf("\n");
    }
}

// 1 
// 1 1 
// 1 3 1 
// 1 4 5 1 
// 1 5 6 7 1 
// 1 6 7 8 9 1 
// 1 7 8 9 10 11 1 