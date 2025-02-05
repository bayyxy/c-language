#include <stdio.h>

int main() {
    int Bilangan;
    int Jumlah_Bilangan = 0;     
    int Total_Input = 0;      
    
    while (Bilangan >=0) {
        printf("Masukkan bilangan bulat positif (masukkan angka negatif untuk berhenti) : ");
        scanf("%d", &Bilangan);
        
        if(Bilangan <0)
        	break;

        Jumlah_Bilangan += Bilangan;
        Total_Input++;  
    }
    if (Total_Input > 0) {
        
        double Rata_Rata = (double)Jumlah_Bilangan / Total_Input;
        printf("\nTotal bilangan : %d\n", Jumlah_Bilangan	);
        printf("Rata-rata bilangan : %.2f\n", Rata_Rata);
    } else {
        printf("Tidak ada bilangan yang dimasukkan.\n");
    }return 0;
}