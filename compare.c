#include <stdio.h>

int main(){

FILE *file1, *file2;
char n, m;
int flag = 0;

file1 = fopen("equal.txt", "r");
file2 = fopen("notequal.txt", "r");

while(!feof(file1)) {
n = getc(file1);
m = getc(file2);

if(n!=m) {
flag = 1;
break;


}
}
char c;
c = getc(file2);
if(flag==0 && c == EOF) {
printf("Both files are equal\n");
} else {
printf("Both files are not equal\n");
}
return 0;
}
