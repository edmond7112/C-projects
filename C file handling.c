//C File Handling
#include <stdio.h>//scanf(),printf(),fprintf(),fclose(),
#include <stdlib.h>//exit()
int main(){
    int number;
    FILE *fptr;//Declare Pointer
    fptr = fopen("C:\\Users\\user\\Documents\\C Projects\\file.txt", "w");
    if (fptr ==NULL){
		printf("Error Opening The File");
		exit(1);
	}
	printf("Enter a random number:");
	scanf("%d",&number);
	fprintf(fptr,"The number entered is %d",number);
	fclose(fptr);
	printf("Number Written Successfully");
	return 0;//Exxecution Successful
}