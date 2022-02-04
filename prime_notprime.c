#include<stdio.h>

void main() {
	int num, temp = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(int i = 2; i <= num/2; i++) {
		if(num%i==0) {
			temp = 1;
			break;
			}


	}
	
	if(num == 0 || num == 1) {
		printf("%d is not a prime nor composite", num);
	} else {
		if(temp == 0) {
			printf("%d is a prime number", num);
		} else {
			printf("%d is not a prime number", num);
}
}



}
