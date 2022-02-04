#include <stdio.h>

void main() {
	int a,b;

	printf("Enter the size of the array: ");
	scanf("%d %d", &a, &b);

	int arr1[a][b], arr2[a][b];

	printf("Enter the elements of 1 array: ");

	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			scanf("%d", &arr1[i][j]);
		}

	}
	printf("Enter the elements of 2 array: ");
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			scanf("%d", &arr2[i][j]);
		}

	}
	int sum = 0, mul[a][b], k = 0;
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			for(k = 0; k < a; k++) {
				sum = sum + arr1[i][k] * arr2[k][j];
			}
			mul[i][j] = sum;
			sum = 0;
		}

	}
	printf("Resultant metrix: ");
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			printf("%ld", &mul[i][j]);
		}
		printf("\n");

	}






}
