#include <stdio.h>
#include <string.h>

int main(){

FILE *str1;

str1=fopen("details.txt", "w");

	char str[50];
	int marks;

	printf("Enter Student name: ");
	scanf("%s", str);
	fprintf(str1,"Name: %s\n", str);

	printf("Enter marks of the student: ");
	scanf("%d", &marks);
	fprintf(str1,"Marks: %d\n", marks);
	fprintf(str1,"\n");

fclose(str1);

return 0;
}
