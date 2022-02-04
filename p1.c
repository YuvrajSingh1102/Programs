#include <stdio.h> 

void random(int *, int*);

int main() {

int a = 10, b = 20;
printf("Value before pointer:%d %d",a, b);
random(&a,&b);
printf("Value before pointer:%d %d",a, b);


return 0;
}

void random(int *a, int *b) {
	*a = 30;
	*b = 40;
}
