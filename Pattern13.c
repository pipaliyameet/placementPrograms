#include<stdio.h>
void main(){
    int n=6;
    // printf("Enter number : ");
    // scanf("%d",&n);

    for(int i=0 ;i<n/2 ;i++){
        for(int k=0 ;k<i ;k++){
            printf("  ");
        }
        for(int j=i ;j<=n-i ;j++){
            if(i==0 || j==n-i ||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    for(int i=(n/2) ;i>=0 ;i--){
        for(int k=0 ;k<i ;k++){
            printf("  ");
        }
        for(int j=n-i ;j>=i ;j--){
            if(i==0 || j==n-i ||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

// * * * * * * * 
//   *       * 
//     *   * 
//       * 
//     *   * 
//   *       * 
// * * * * * * * 