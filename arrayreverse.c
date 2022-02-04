#include<stdio.h>

void main() {
	int n;
	printf("Enter the size of the array");
	scanf("%d", &n);
	
	int arr1[n];

	printf("Enter the values of the array");
	for(int i=0; i<n;i++) {
		scanf("%d", &arr1[i]);
	}
	
	for(int i = n-1; i >= 0; i--) {
		printf("%d", arr1[i]);
			
	}
}

