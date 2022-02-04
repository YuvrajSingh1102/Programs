#include <stdio.h>

int main(){

FILE *file1, *file2;
char c;
file1 = fopen("file.txt", "r");
file2 = fopen("file1.txt", "w");

while(!feof(file1)) {
	c = getc(file1);
	putc(c, file2);
}


//fprintf(file1, "This is original file\n");
fclose(file1);
return 0;
}
