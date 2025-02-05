#include <stdio.h>
int main()
{
	int produk[2][3]={ 
	{5,8,6},
	{3,7,9}
	};
	printf("Total penjualan untuk setiap produk\n");
	
	int total_produk[3]={0,0,0};
	
	for (int i=0; i<3; i++){
		total_produk[i]=produk[0][i]+produk[1][i];
	}
	printf("Produk A: %d\n",total_produk[0]);
	printf("Produk B: %d\n",total_produk[1]);
	printf("Produk C: %d",total_produk[2]);
	
	return 0;
}