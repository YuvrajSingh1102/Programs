#include<stdio.h>

void main() {
	int n = 0;
	printf("Enter the size of the array");
	scanf("%d", &n);
	
	int arr1[n], arr2[n];

	printf("Enter the values of the array");
	for(int i=0; i<n;i++) {
		scanf("%d", &arr1[i]);
		arr2[i] = arr1[i];
	}

	printf("Array one is\n");
	for(int i=0; i<n;i++) {
		printf("%d ", arr1[i]);
	}

	printf("Array two is\n");
	for(int i=0; i<n;i++) {
		printf("%d ", arr2[i]);
	}

}


