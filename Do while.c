//Do While Loop
#include <stdio.h>
int main(){
    int i=1,sum=0;//Start
    do{
        printf("%d \n",i);
        sum+=i;
        i++;//Start
    }while(i<=10);
    printf("The sum of 10 numbers is %d",sum);
    return 0;
}
    
  