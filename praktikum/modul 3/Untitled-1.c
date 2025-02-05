#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengatur warna teks di terminal
void setColor(const char *color) {
    printf("%s", color);
}

void resetColor() {
    printf("\033[0m"); // Reset warna ke default
}

void printHeader() {
    setColor("\033[1;36m"); // Warna Cyan cerah
    printf("====================================\n");
    printf("        Program Kalkulator          \n");
    printf("====================================\n");
    resetColor();
}

void printMenu() {
    setColor("\033[1;32m"); // Warna hijau terang
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");
    resetColor();
}

void performOperation(int choice) {
    double num1, num2, result;
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            setColor("\033[1;34m"); // Warna biru terang
            printf("Hasil: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            setColor("\033[1;34m");
            printf("Hasil: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            setColor("\033[1;34m");
            printf("Hasil: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                setColor("\033[1;34m");
                printf("Hasil: %.2lf\n", result);
            } else {
                setColor("\033[1;31m"); // Warna merah terang
                printf("Error: Tidak dapat membagi dengan nol.\n");
            }
            break;
        default:
            setColor("\033[1;31m");
            printf("Pilihan tidak valid!\n");
    }
    resetColor();
}

int main() {
    int choice;

    do {
        system("clear"); // Bersihkan layar (untuk Linux/Mac, ganti dengan 'cls' untuk Windows)
        printHeader();
        printMenu();
        printf("Pilih operasi (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            performOperation(choice);
        } else if (choice == 5) {
            setColor("\033[1;33m"); // Warna kuning terang
            printf("Terima kasih telah menggunakan program ini!\n");
        } else {
            setColor("\033[1;31m");
            printf("Pilihan tidak valid, coba lagi.\n");
        }

        resetColor();
        printf("\n");
        system("read -p 'Tekan Enter untuk melanjutkan...' var");

    } while (choice != 5);

    return 0;
}
