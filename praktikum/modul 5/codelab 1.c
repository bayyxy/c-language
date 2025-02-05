#include <stdio.h>'
#include <string.h>
int main()
{
	printf("Daftar siswa dan nilai sebelum diubah:\n");
	int nilai[5]={85,90,78,92,88};
	char siswa[5][50]={"Alice", "Bob", "Charlie", "David", "Eva"};
	
	
	for(int i=0;i<5;i++){
		printf("%s: %d\n", siswa[i], nilai[i]);	
	}
	
	nilai[3]=95;
	printf("\nDaftar Siswa dan nilai setelah diubah:\n");
	for(int j=0;j<5;j++){
	printf("%s: %d\n", siswa[j], nilai[j]);
	}
	
	return 0;
}