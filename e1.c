#include<stdio.h>

extern void hello();

void main () {
extern int p;
printf("Value of p is %d ", p);
hello();

}
