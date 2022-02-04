#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, *p;
	printf("Enter how many number: ");
	scanf("%d", &n);
	p = (int *)calloc(n,sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d", p+i);
		
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum+*(p+i);
	}
	printf("sum is: %d\n", sum);

return 0;
}
