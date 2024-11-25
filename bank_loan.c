// Program to Lend out Bank Loan
#include <stdio.h>
int main(){
int age , income;

printf("enter age and income:");
scanf("%d%d",&age, &income);

if(age>=21 && income>21000){
printf("Congratulations you qualify for a loan");
}

else {
printf("you dont qualify for a loan");
}

return 0;
}