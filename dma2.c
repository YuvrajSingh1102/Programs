#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, *p, m;
	printf("Enter how many number: ");
	scanf("%d", &n);
	p = (int *)calloc(n,sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d", p+i);
		
	}
	printf("Enter how many more elements you want to add: ");
	scanf("%d", &m);
	p = (int *)realloc(p, (n+m)*sizeof(int));
	
	for(int i = n;i < n+m; i++) {
		scanf("%d", p+i);
	}
	int sum = 0;
	for(int i = 0; i < n+m; i++){
		sum = sum+*(p+i);
	}
	printf("sum is: %d\n", sum);

return 0;
}
