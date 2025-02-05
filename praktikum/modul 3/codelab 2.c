#include <stdio.h>

enum kelas{Economy = 100,
	Business = 500,
	First_class = 1000
	};

int main()
{
	int order;
	
	
	printf("Pilih Kelas Tiket:\n1. Economy\n2. Business\n3. First class");
	
	printf("\nMasukkan pilihan (1-3):");
	scanf("%d",&order);
	
	if (order>0 && order<4){
		if (order == 1){
			printf("Harga tiket kelas ekonomi: $%d",Economy);
		}else if (order == 2){
			printf("Harga tiket kelas bisnis: $%d",Business);
		}else {
			printf("Harga tiket kelas utama: $%d",First_class);
		}
	}else{
		printf("input tidak valid");
	}
	return 0;
}