#include <stdio.h>
#include <string.h>

struct student {
	int sid;
	char name[20];
	float cp;
	int backlog;
}s[3];

int main() {

	int i;
	for(int i = 0; i < 3; i++) {
	
	printf("Enter the details of students:%d\n", i+1);
	printf("Enter student id: ");
	scanf("%d", &s[i].sid);
	
	printf("Enter student name: ");
	scanf("%s",s[i].name);

	printf("Enter cp: ");
	scanf("%f", &s[i].cp);

	printf("Enter student backlog: ");
	scanf("%d", &s[i].backlog);
	printf("\n");
	}

	for(int i = 0; i < 3; i++) {

	printf("Information of student 1 is: %d\n%d\n%s\n%f\n%d\n\n",i+1, s[i].sid, s[i].name, s[i].cp, s[i].backlog);

	}
}
