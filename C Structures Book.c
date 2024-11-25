//C Structures Book
#include <stdio.h>
#include<string.h>//strcpy
 struct book{
        char title[30];
        char author[30];
        int year;
        char ISBN[13];
        float price;
    }book;
    int main (){
        //struct book
        strcpy(book.title,"introduction to C programming");
        strcpy(book.author,"john smith");
        strcpy(book.ISBN,"9780131103627");
        book.price=49.99;
        book.year=2022;
         printf("title: %s\n",book.title);
        printf("author: %s\n",book.author);
        printf("ISBN: %s\n",book.ISBN);
        printf("Year: %d\n",book.year);
        printf("price: %f\n",book.price);
        return 0;
    }