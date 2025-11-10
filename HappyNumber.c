#include <stdio.h>
void main(){
    int n ,firstLoopNum ,count ,firstLoopTemp ,innerLoopNum ,innerLoopTemp;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=1){
        count=firstLoopTemp=0 ,firstLoopNum=innerLoopNum=n ;

        while(firstLoopNum>0){
            firstLoopTemp = ((firstLoopNum%10)*(firstLoopNum%10));
            firstLoopNum/=10;
            count++;
        }

        for(int i=0 ;i<count-1 ;i++){
            while(innerLoopNum>0){
                innerLoopTemp =  ((innerLoopNum%10)*(innerLoopNum%10));
                innerLoopNum/=10;
            }
            if(innerLoopTemp==firstLoopTemp) {
                printf("Number is not happy");
                count=-1;
                break;
            }     
            innerLoopNum=innerLoopTemp;  
        }
        n=firstLoopTemp;
        if(count==-1) break;
    }
    if(n==1) printf("Number is happy");
}