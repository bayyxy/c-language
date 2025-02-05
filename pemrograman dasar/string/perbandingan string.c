#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
char string1[100];
char string2[100];

printf("masukkan string pertama");
scanf("%s",&string1);

printf("masukkan string kedua");
scanf("%s",&string2);

int big = strcmp(string1, string2);
if(big==0){
	printf("string sama");
}else if(big>0){
	printf("string pertama lebih besar");
}else{
	printf("string kedua lebih besar");
}
return 0;
}