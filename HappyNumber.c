#include <stdio.h>
void main(){
    int mainNumber,n ,firstLoopNum ,count=0 ,firstLoopTemp ,innerLoopNum ,innerLoopTemp;
    printf("Enter a number : ");
    scanf("%d",&mainNumber);
    n=mainNumber;
    while(n!=1){
        firstLoopTemp=0 ,firstLoopNum=n ,innerLoopNum=mainNumber;

        while(firstLoopNum>0){
            firstLoopTemp = firstLoopTemp + ((firstLoopNum%10)*(firstLoopNum%10));
            firstLoopNum/=10;
        }
        count++;
        printf("%d ,",firstLoopTemp);
        for(int i=0 ;i<count-1 ;i++){
            innerLoopTemp=0;
            while(innerLoopNum>0){
                innerLoopTemp = innerLoopTemp + ((innerLoopNum%10)*(innerLoopNum%10));
                innerLoopNum/=10;
            }
            // printf("inner : %d\n",innerLoopTemp);
            if(innerLoopTemp==firstLoopTemp) {
                printf("\nNumber is not happy bacause '%d' is repeat",innerLoopTemp);
                count=-1;
                break;
            }     
            innerLoopNum=innerLoopTemp;  
        }
        n=firstLoopTemp;
        if(count==-1) break;
    }
    if(n==1) printf("\nNumber is happy");
}