//For Loop Program
#include <stdio.h>
int main(){
    int i,sum=0;
    //for(start;stop;step)
    for(int i=100;i>0;i--){
        printf("%d \n",i);
        sum =sum+i;
        //sum +=i
    }
    printf("The sum is %d",sum);
    return 0;
}