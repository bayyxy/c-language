#include <stdio.h>
#include <string.h>
int main()
{
	char nama[100];
	printf("masukkan string terserah");
	gets(nama); 
	
	printf("string sebelum dibalik ialah %s\n",nama);
	int jumlah = strlen(nama);
	
	for(int i=jumlah-1; i>=0; i--){
	printf("%c",nama[i]);
	}
	
	return 0;
}