#include<stdio.h>

void main() {
	int n = 0, even = 0, odd = 0;
	printf("Enter the size of the array");
	scanf("%d", &n);
	
	int arr1[n];

	printf("Enter the values of the array");
	for(int i=0; i<n;i++) {
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < n; i++) {
		if(arr1[i]%2==0) {
			even = even + 1;
		}
		else {
			odd = odd + 1;
		}
	}
	
	printf("Even is %d\n", odd);
	printf("odd is %d\n", even);
}

