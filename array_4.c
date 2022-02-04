#include<stdio.h>

void main() {
	int a,b;
	printf("Enter the size of the array");
	scanf("%d %d", &a, &b);
	
	int arr1[a][b];

	printf("Enter the values of the array");
	for(int i=0; i<a;i++) {
		for(int j =0; j < b; j++) {
			scanf("%d", &arr1[i][j]);
		}
		
	}
	for (i = 0; i < 3;  )
	
}

