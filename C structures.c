//C Structures
#include <stdio.h>
#include<string.h>//strcpy
 struct student{
        char name[20];
        char reg_no[30];
        char email[30];
        int ID;
        int phone_no;
        float marks;
    }student1,student2;
    int main (){
        //struct student student1 student2
        strcpy(student1.name,"edmond");
        strcpy(student1.reg_no,"BCS-05-0214/2024");
        strcpy(student1.email,"edmond@gmail.com");
        student1.ID=768678;
        student1.phone_no=705930704;
        student1.marks=70.5;
        printf("name: %s\n",student1.name);
        printf("reg number: %s\n",student1.reg_no);
        printf("email: %s\n",student1.email);
        printf("ID number: %d\n",student1.ID);
        printf("Phone Number: %d\n",student1.phone_no);
        printf("Marks: %f\n",student1.marks);
        return 0;
    }