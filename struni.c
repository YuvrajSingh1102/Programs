#include <stdio.h>
#include <string.h>

struct student {
	int sid;
	char name[20];
	float cp;
	int backlog;
}s1,s2,s3;

union book {

char title:
char author;
int pages;
int price:
}u1;

int main() {
	s1.sid = 1;
	strcpy(s1.name, "abc");
	s1.cp = 5.7;
	s1.backlog = 2;

	s2.sid = 2;
	strcpy(s2.name, "xyz");
	s2.cp = 10.5;
	s2.backlog = 3;

	printf("Enter student id: ");
	scanf("%d", &s3.sid);
	
	printf("Enter student name: ");
	scanf("%s",s3.name);

	printf("Enter cp: ");
	scanf("%f", &s3.cp);

	printf("Enter student backlog: ");
	scanf("%d", &s3.backlog);

	printf("Enter the entry of book: ");
	strcopy(u1.title, "C programming");
	printf("title: %d",u1.title);

	strcopy(u1.author, "RS khurmi");
	printf("author: %d",u1.author);

	printf("title: %d",u1.title);
	printf("author: %d",u1.author);

	printf("Information of student 1 is: \n%d\n%s\n%f\n%d\n", s1.sid, s1.name, s1.cp, s1.backlog);

	printf("Information of student 2 is: \n%d\n%s\n%f\n%d\n", s2.sid, s2.name, s2.cp, s2.backlog);

	printf("Information of student 3 is: \n%d\n%s\n%f\n%d\n", s3.sid, s3.name, s3.cp, s3.backlog);

}
