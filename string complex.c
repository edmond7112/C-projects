#include <stdio.h>
#include <string.h>
struct employee{
char name[25],department[20],email[50];
int id;
float salary;
};
int main(){
	struct employee John;
	char name,department,email;
	int id;
	float salary;
	strcpy(John.name,"John Doe");
	strcpy(John.department,"Human Resource");
	strcpy(John.email,"john,doe@gmail.com");
	John.id=12345;
	John.salary=55000.50;
	
	printf("name :%s\n",John.name);
	printf("department :%s\n",John.department);
	printf("email :%s\n",John.email);
	printf("id number :%d\n",John.id);
	printf("salary :%.2f\n",John.salary);
	return 0;
	
}