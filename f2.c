#include <stdio.h>

int main(){

FILE *file1, *file2, *file3;
int n;

file2 = fopen("even.txt", "w");
file3 = fopen("odd.txt", "w");

file1 = fopen("number.txt", "r");

while(!feof(file1)) {
	fscanf(file1,"%d ", &n);
	if(n%2==0) {
		fprintf(file2, "%d ",n);
	} else {
		fprintf(file3, "%d ",n);	
}
}


//fprintf(file1, "This is original file\n");
fclose(file1);
fclose(file2);
fclose(file3);
return 0;
}
