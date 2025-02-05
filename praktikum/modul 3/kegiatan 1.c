#include <stdio.h>

enum Film {
	spiderman = 50000,
	batman = 55000,
	superman = 60000,
	avengers = 70000,
	joker = 45000
};

enum Jenis_tiket {
	regular = 30000,
	vip = 100000,
	vvip = 150000
};

int main()
{
	int order_film, order_tiket, bayar;
	char member;
	
	printf("Film:");
	printf("\n1. spiderman - Rp.%d\n2. batman - Rp.%d", spiderman, batman);
	printf("\n3. superman - Rp.%d\n4. avengers - Rp.%d\n5. joker - Rp.%d", superman, avengers, joker );
	printf("\npilih film (1-5) :");
	scanf("%d",&order_film);
	
	printf("\nJenis tiket:");
	printf("\n1. regular - Rp.%d\n2. vip - Rp.%d\n3. vvip - Rp.%d", regular, vip, vvip);
	printf("\npilih jenis tiket (1-3) :");
	scanf("%d",&order_tiket);
	
	printf("apakah anda member? (Y/N):");
	scanf(" %c",&member);
	
	if (member == 'y' || member == 'Y'){
		if (order_film == 1){
			if (order_tiket == 1){
				double total_member_spiderman = (spiderman+regular)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_spiderman);
				printf("\nalamat memori variabel total: %p",&total_member_spiderman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_spiderman){
					double kembalian_spiderman = bayar-total_member_spiderman;
					printf("kembalian anda: Rp%.0lf", kembalian_spiderman);
				} else if (bayar<total_member_spiderman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_spiderman = (spiderman+vip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_spiderman);
				printf("\nalamat memori variabel total: %p",&total_member_spiderman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_spiderman){
					double kembalian_spiderman = bayar-total_member_spiderman;
					printf("kembalian anda: Rp%.0lf", kembalian_spiderman);
				} else if (bayar<total_member_spiderman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_spiderman = (spiderman+vvip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_spiderman);
				printf("\nalamat memori variabel total: %p",&total_member_spiderman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_spiderman){
					double kembalian_spiderman = bayar-total_member_spiderman;
					printf("kembalian anda: Rp%.0lf", kembalian_spiderman);
				} else if (bayar<total_member_spiderman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else{
				printf("input tidak valid");
			}	
		}else if (order_film == 2){
			if (order_tiket == 1){
				double total_member_batman = (batman+regular)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_batman);
				printf("\nalamat memori variabel total: %p",&total_member_batman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_batman){
					double kembalian_batman = bayar-total_member_batman;
					printf("kembalian anda: Rp%.0lf", kembalian_batman);
				} else if (bayar<total_member_batman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_batman = (batman+vip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_batman);
				printf("\nalamat memori variabel total: %p",&total_member_batman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_batman){
					double kembalian_batman = bayar-total_member_batman;
					printf("kembalian anda: Rp%.0lf", kembalian_batman);
				} else if (bayar<total_member_batman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_batman = (batman+vvip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_batman);
				printf("\nalamat memori variabel total: %p",&total_member_batman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_batman){
					double kembalian_batman = bayar-total_member_batman;
					printf("kembalian anda: Rp%.0lf", kembalian_batman);
				} else if (bayar<total_member_batman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");	
			}	
		}else if (order_film == 3){
			if (order_tiket == 1){
				double total_member_superman = (superman+regular)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_superman);
				printf("\nalamat memori variabel total: %p",&total_member_superman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_superman){
					double kembalian_superman = bayar-total_member_superman;
					printf("kembalian anda: Rp%.0lf", kembalian_superman);
				} else if (bayar<total_member_superman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_superman = (superman+vip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_superman);
				printf("\nalamat memori variabel total: %p",&total_member_superman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_superman){
					double kembalian_superman = bayar-total_member_superman;
					printf("kembalian anda: Rp%.0lf", kembalian_superman);
				} else if (bayar<total_member_superman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_superman = (superman+vvip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_superman);
				printf("\nalamat memori variabel total: %p",&total_member_superman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_superman){
					double kembalian_superman = bayar-total_member_superman;
					printf("kembalian anda: Rp%.0lf", kembalian_superman);
				} else if (bayar<total_member_superman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");
			}	
		}else if (order_film == 4){
			if (order_tiket == 1){
				double total_member_avengers = (avengers+regular)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_avengers);
				printf("\nalamat memori variabel total: %p",&total_member_avengers);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_avengers){
					double kembalian_avengers = bayar-total_member_avengers;
					printf("kembalian anda: Rp%.0lf", kembalian_avengers);
				} else if (bayar<total_member_avengers){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_avengers = (avengers+vip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_avengers);
				printf("\nalamat memori variabel total: %p",&total_member_avengers);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_avengers){
					double kembalian_avengers = bayar-total_member_avengers;
					printf("kembalian anda: Rp%.0lf", kembalian_avengers);
				} else if (bayar<total_member_avengers){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_avengers = (avengers+vvip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_avengers);
				printf("\nalamat memori variabel total: %p",&total_member_avengers);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_avengers){
					double kembalian_avengers = bayar-total_member_avengers;
					printf("kembalian anda: Rp%.0lf", kembalian_avengers);
				} else if (bayar<total_member_avengers){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");
			}	
		}else if (order_film == 5){
			if (order_tiket == 1){
				double total_member_joker = (joker+regular)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_joker);
				printf("\nalamat memori variabel total: %p",&total_member_joker);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_joker){
					double kembalian_joker = bayar-total_member_joker;
					printf("kembalian anda: Rp%.0lf", kembalian_joker);
				} else if (bayar<total_member_joker){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_joker = (joker+vip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_joker);
				printf("\nalamat memori variabel total: %p",&total_member_joker);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_joker){
					double kembalian_joker = bayar-total_member_joker;
					printf("kembalian anda: Rp%.0lf", kembalian_joker);
				} else if (bayar<total_member_joker){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_joker = (joker+vvip)*0.9;
				printf("Total harga: Rp.%.0lf", total_member_joker);
				printf("\nalamat memori variabel total: %p",&total_member_joker);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_joker){
					double kembalian_joker = bayar-total_member_joker;
					printf("kembalian anda: Rp%.0lf", kembalian_joker);
				} else if (bayar<total_member_joker){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");
			}	
		}else{
			printf("input tidak valid");
		}
	}if (member == 'n'|| member == 'N'){
		if (order_film == 1){
			if (order_tiket == 1){
				double total_member_spiderman = (spiderman+regular);
				printf("Total harga: Rp.%.0lf", total_member_spiderman);
				printf("\nalamat memori variabel total: %p",&total_member_spiderman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_spiderman){
					double kembalian_spiderman = bayar-total_member_spiderman;
					printf("kembalian anda: Rp%.0lf", kembalian_spiderman);
				} else if (bayar<total_member_spiderman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_spiderman = (spiderman+vip);
				printf("Total harga: Rp.%.0lf", total_member_spiderman);
				printf("\nalamat memori variabel total: %p",&total_member_spiderman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_spiderman){
					double kembalian_spiderman = bayar-total_member_spiderman;
					printf("kembalian anda: Rp%.0lf", kembalian_spiderman);
				} else if (bayar<total_member_spiderman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_spiderman = (spiderman+vvip);
				printf("Total harga: Rp.%.0lf", total_member_spiderman);
				printf("\nalamat memori variabel total: %p",&total_member_spiderman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_spiderman){
					double kembalian_spiderman = bayar-total_member_spiderman;
					printf("kembalian anda: Rp%.0lf", kembalian_spiderman);
				} else if (bayar<total_member_spiderman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else{
				printf("input tidak valid");
			}	
		}else if (order_film == 2){
			if (order_tiket == 1){
				double total_member_batman = (batman+regular);
				printf("Total harga: Rp.%.0lf", total_member_batman);
				printf("\nalamat memori variabel total: %p",&total_member_batman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_batman){
					double kembalian_batman = bayar-total_member_batman;
					printf("kembalian anda: Rp%.0lf", kembalian_batman);
				} else if (bayar<total_member_batman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_batman = (batman+vip);
				printf("Total harga: Rp.%.0lf", total_member_batman);
				printf("\nalamat memori variabel total: %p",&total_member_batman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_batman){
					double kembalian_batman = bayar-total_member_batman;
					printf("kembalian anda: Rp%.0lf", kembalian_batman);
				} else if (bayar<total_member_batman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_batman = (batman+vvip);
				printf("Total harga: Rp.%.0lf", total_member_batman);
				printf("\nalamat memori variabel total: %p",&total_member_batman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_batman){
					double kembalian_batman = bayar-total_member_batman;
					printf("kembalian anda: Rp%.0lf", kembalian_batman);
				} else if (bayar<total_member_batman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");	
			}	
		}else if (order_film == 3){
			if (order_tiket == 1){
				double total_member_superman = (superman+regular);
				printf("Total harga: Rp.%.0lf", total_member_superman);
				printf("\nalamat memori variabel total: %p",&total_member_superman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_superman){
					double kembalian_superman = bayar-total_member_superman;
					printf("kembalian anda: Rp%.0lf", kembalian_superman);
				} else if (bayar<total_member_superman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_superman = (superman+vip);
				printf("Total harga: Rp.%.0lf", total_member_superman);
				printf("\nalamat memori variabel total: %p",&total_member_superman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_superman){
					double kembalian_superman = bayar-total_member_superman;
					printf("kembalian anda: Rp%.0lf", kembalian_superman);
				} else if (bayar<total_member_superman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_superman = (superman+vvip);
				printf("Total harga: Rp.%.0lf", total_member_superman);
				printf("\nalamat memori variabel total: %p",&total_member_superman);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_superman){
					double kembalian_superman = bayar-total_member_superman;
					printf("kembalian anda: Rp%.0lf", kembalian_superman);
				} else if (bayar<total_member_superman){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");
			}	
		}else if (order_film == 4){
			if (order_tiket == 1){
				double total_member_avengers = (avengers+regular);
				printf("Total harga: Rp.%.0lf", total_member_avengers);
				printf("\nalamat memori variabel total: %p",&total_member_avengers);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_avengers){
					double kembalian_avengers = bayar-total_member_avengers;
					printf("kembalian anda: Rp%.0lf", kembalian_avengers);
				} else if (bayar<total_member_avengers){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_avengers = (avengers+vip);
				printf("Total harga: Rp.%.0lf", total_member_avengers);
				printf("\nalamat memori variabel total: %p",&total_member_avengers);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_avengers){
					double kembalian_avengers = bayar-total_member_avengers;
					printf("kembalian anda: Rp%.0lf", kembalian_avengers);
				} else if (bayar<total_member_avengers){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_avengers = (avengers+vvip);
				printf("Total harga: Rp.%.0lf", total_member_avengers);
				printf("\nalamat memori variabel total: %p",&total_member_avengers);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_avengers){
					double kembalian_avengers = bayar-total_member_avengers;
					printf("kembalian anda: Rp%.0lf", kembalian_avengers);
				} else if (bayar<total_member_avengers){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");
			}	
		}else if (order_film == 5){
			if (order_tiket == 1){
				double total_member_joker = (joker+regular);
				printf("Total harga: Rp.%.0lf", total_member_joker);
				printf("\nalamat memori variabel total: %p",&total_member_joker);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_joker){
					double kembalian_joker = bayar-total_member_joker;
					printf("kembalian anda: Rp%.0lf", kembalian_joker);
				} else if (bayar<total_member_joker){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 2){
				double total_member_joker = (joker+vip);
				printf("Total harga: Rp.%.0lf", total_member_joker);
				printf("\nalamat memori variabel total: %p",&total_member_joker);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_joker){
					double kembalian_joker = bayar-total_member_joker;
					printf("kembalian anda: Rp%.0lf", kembalian_joker);
				} else if (bayar<total_member_joker){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else if (order_tiket == 3){
				double total_member_joker = (joker+vvip);
				printf("Total harga: Rp.%.0lf", total_member_joker);
				printf("\nalamat memori variabel total: %p",&total_member_joker);
				printf("\nmasukkan uang pembayaran :Rp.");
				scanf("%d",&bayar);
				
				if (bayar>total_member_joker){
					double kembalian_joker = bayar-total_member_joker;
					printf("kembalian anda: Rp%.0lf", kembalian_joker);
				} else if (bayar<total_member_joker){
					printf("uang anda kurang");
				} else{
					printf("terima kasih");
				} 
			}else {
				printf("input tidak valid");
			}	
		}else{
			printf("input tidak valid");
		}
	}
return 0;
	
}
	