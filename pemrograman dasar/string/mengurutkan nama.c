#include <stdio.h>
#include <string.h>
int main()
{
char string[10][10];
char wadah[10][10];
int jumlah;
printf("berapa string yang anda inginkan 1-10 : ");
scanf("%d",&jumlah);

if(0<jumlah&&jumlah<10){
	
	for(int i=0; i<jumlah; i++){
		printf("masukkan stringe ke-%d :",i+1);
		scanf("%s",string[i]);
	}
	printf("\nstring sebelum diurutkan :\n");
	for (int i=0; i<jumlah; i++){
		printf("%s\n",string[i]);
	}
	for(int i=0; i<jumlah-1; i++){
		for(int j=i+1; j<jumlah; j++){
			if(strcmp(string[i],string[j])>0){
				strcpy(wadah,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],wadah);
			}
		}
	}
	printf("nama dalam urutan abjad ialah:\n");
	for(int i=0; i<jumlah; i++){
		printf("%s\n",string[i]);
	}
}
	return 0;
}