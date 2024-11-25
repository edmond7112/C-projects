//While Loop
#include <stdio.h>
int main()
{
    int n=15 ,sum=0;
    while (n>0){
        sum=sum+1;
        printf("%d\n",n);
        n=n-1;
    }
    printf("Sum is %d",sum);
    return 0;
    
}