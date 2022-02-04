#include<stdio.h>

void main() {
	
	int n,m;
	printf("Enter the number of the rows and column\n");
	scanf("%d %d", &n, &m);

	int arr1[n][m], arr2[n][m], arr3[n][m];
	
	printf("Enter the elements of 1 the array\n");
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter the elements of the 2 array\n");

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	
	printf("The metrix 1 is\n");
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("The matrix 2 is\n");
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			arr3[n][m]=arr1[i][j]+arr2[i][j];
		}
		
	}
	printf("The matrix 3 is\n");
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}






















}
