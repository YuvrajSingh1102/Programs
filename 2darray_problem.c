#include<stdio.h>

void main() {
	
	int n,m;
	printf("Enter the number of the rows and column\n");
	scanf("%d %d", &n, &m);

	int arr[n][m];
	printf("Enter the elements of the array\n");
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The metrix is\n");
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
