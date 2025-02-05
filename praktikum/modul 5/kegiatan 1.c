#include <stdio.h>
#include <string.h>
int main()
{
	int jumlah_buah;
	char buah[10][20];
	char wadah[10][20];//sebagai wadah untuk proses penukaran
	
	printf("masukkan jumlah buah (maksimal 10): ");
	scanf("%d",&jumlah_buah);
	
	if(0<jumlah_buah&&jumlah_buah<11){//membatasi jumlah buah 
		
	for(int i=0; i<jumlah_buah; i++){//menginputkan buah
	printf("masukkan nama buah ke-%d: ",i+1);
	scanf("%s",&buah[i]);
	}
	printf("\nNama buah dalam urutan yang diinputkan:");
	
	for(int i=0; i<jumlah_buah; i++){//menampilkan buah sebelum diurutkan
	printf("\n%s",buah[i]);
	}
	
	 for (int i=0; i < jumlah_buah - 1; i++) {//mengurutkan nama buah sesuai abjad
        for (int j= i + 1; j < jumlah_buah; j++) {
            if (strcmp(buah[i], buah[j]) > 0) {//proses pertukaran akan terjadi apabila buah ke i lebih besar dari buah ke j
                strcpy(wadah, buah[i]);
                strcpy(buah[i], buah[j]);
                strcpy(buah[j], wadah);
            }
        }
    }
    printf("\n\nnama buah dalam urutan abjad:\n");
    for(int i=0; i<jumlah_buah; i++){
    	printf("%s\n",buah[i]);
	}
	}else{
		printf("input anda tidak valid");
	}
	return 0;
}