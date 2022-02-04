#include<stdio.h>

void main() {
	int a, sum =0, counter = 0;
	float avg = 0.0;
	printf("Enter the size of the array:\n");
	scanf("%d", &a);

	int arr[a];
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Array is\n");
	for (int i = 0; i < a; i++) {
		printf("%d", arr[ i ]);
	}
	
	//sum:-
	for (int i = 0; i < a; i++) {
		sum = sum + arr[i];
	}
	printf("Sum of all elements are %d\n", sum);

	//minimum
	int min = arr[0], max = arr[0];
	for(int i = 0; i < a; i++) {
		if(arr[i] < min) {
			min = arr[i];	
	}
	}
	printf("Minimun elements of array is %d\n", min);

	//maximum
	for(int i = 0; i < a; i++) {
		if(arr[i] > max) {
			max = arr[i];	
	}
	}
	printf("Minimun elements of array is %d\n", max);
	
	//length of the array
	for(int i = 0; i < a; i++) {
		counter++;	
	}
	printf("Length of the array is %d\n", counter);

	//Average
	avg = (float)sum/(float)counter;
	printf("Average is %f\n", avg);

}
