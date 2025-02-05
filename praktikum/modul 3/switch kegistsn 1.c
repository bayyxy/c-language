#include <stdio.h>
enum harga
{
    spiderman = 50000,
    batman = 55000,
    superman = 60000,
    avengers = 70000,
    joker = 45000
};

enum jenistiket
    {
        Reguler = 30000,
        VIP = 100000,
        VVIP = 150000
    };
    
int main (){
    int choose,choose2;
    double totalharga,pembayaran,kembalian;
    char member;
    enum harga harga_tiket;
    enum jenistiket jenis_tiket;
    printf("==== Bioskop ====\nFilm:\n");
    printf("1. Spiderman - Rp.50000\n2. Batman - Rp.55000\n3. Superman - Rp.60000\n4. Avengers - Rp.70000\n5. Joker- Rp.45000\nPilih film (1-5): ");
    scanf("%d",&choose);
    switch (choose) {
        case 1: harga_tiket = spiderman;
        break;
        case 2: harga_tiket = batman;
        break;
        case 3: harga_tiket = superman;
        break;
        case 4: harga_tiket = avengers;
        break;
        case 5: harga_tiket = joker;
        break;
        default: printf("JENIS FILM TIDAK TERSEDIA\n");
        return 1; 
	}
	
    printf("\nJenis Tiket:\n");
    printf("1. Reguler - Rp.30000\n");
    printf("2. VIP - Rp.100000\n");
    printf("3. VVIP - Rp.150000\n");
    printf("Pilih jenis tiket (1-3): ");
    scanf("%d",&choose2);
    switch(choose2){
        case 1: jenis_tiket = Reguler;
        break;
        case 2: jenis_tiket = VIP;
        break;
        case 3: jenis_tiket = VVIP;
        break;
        default: printf("JENIS TIKET INI TIDAK ADA");
        return 1;
	}
	
        totalharga = harga_tiket + jenis_tiket;
    printf("Apakah anda member? (y/n): ");
    scanf(" %c", &member);
    
      if (member=='y'||member=='Y'){
		  totalharga = totalharga - 0.1 * totalharga;
      	  printf("Total harga: Rp.%.lf\n",totalharga);
      	  printf("Alamat Memori variabel totalharga: %p\n",&totalharga);
      	  printf("Masukkan uang pembayaran: ");
      	  scanf("%lf",&pembayaran);
	      if (pembayaran > totalharga){
	        kembalian = pembayaran - totalharga;
	        printf("Kembalian Anda: %.lf",kembalian);
	      }else if (pembayaran < totalharga){
	        printf("Maaf Saldo Anda Tidak Cukup\n");
	      }else{
	        printf("Terimakasih, Uang Anda Pas\n");
	      } 
	      
	  } else if(member=='n' || member=='N'){
		  printf("Total harga: Rp.%.lf\n",totalharga);
      	  printf("Alamat Memori variabel totalharga: %p\n",&totalharga);
      	  printf("Masukkan uang pembayaran: ");
      	  scanf("%lf",&pembayaran);
	      if (pembayaran > totalharga){
	        kembalian = pembayaran - totalharga;
	        printf("Kembalian Anda: %.lf",kembalian);
	      }else if (pembayaran < totalharga){
	        printf("Maaf Saldo Anda Tidak Cukup\n");
	      }else{
	        printf("Terimakasih, Uang Anda Pas\n");
	      } 
	  } else{
		  printf("Input anda salah");
	  }
      
    return 0;
}