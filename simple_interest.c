//program to calculate the simple interest
#include<stdio.h>//scanf(),printf()
int main () {
    //declaration and initialization
    int principal_amount,time,rate,simple_interest;
    printf("Enter principal_amount");
    scanf("%d",&principal_amount);
    
    printf("Enter time");
    scanf("&d",&time);
    
    printf("Enter rate");
    scanf("%d",&rate);
    
    simple_interest=(principal_amount*time*rate)/100;
    printf("The simple interest is %d",simple_interest);
    return 0 ;
    
}