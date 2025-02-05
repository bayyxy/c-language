 #include <stdio.h>

int main() {
    int transaksi, total, ulang;

    do {
        total = 0; // Reset total setiap pencatatan baru dimulai
        printf("================Pencatatan Transaksi=====================\n");
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan):\n");

        while (1) { //infinite loop
            scanf("%d", &transaksi);
            if (transaksi == 0) {
                break; // jika menginputkan angka 0 akan break secara otomatis
            }
            total += transaksi;
        }

        printf("Total dari transaksi tersebut adalah: %d\n", total);
        printf("Apakah Anda ingin mencatat transaksi lagi? (1-Ya, 0-Tidak): ");
        scanf("%d", &ulang);

    } while (ulang == 1); // apabila menginputkan angka 1 akan memulai program dari atas lagi

    printf("Terima kasih!\n");
    return 0;
}