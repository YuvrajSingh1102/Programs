#include <stdio.h> 

void addition(int, int);

int main() {

int x,y;
printf("Enter the 2 numbers: ");
scanf("%d %d", &x, &y);
addition(x, y);

return 0;
}
void addition (int a, int b) {
int c = a + b;
printf("The addition of %d and %d is: %d", a, b, c);
}

