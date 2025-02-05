#include <stdio.h>
#include <string.h>

int main() {
    char Input[50];  
    int i;

    printf("===== Program Mencari Karakter Unik dalam String =====\n");

    printf("Masukkan sebuah string : ");
    fgets(Input, sizeof(Input), stdin);  

    Input[strcspn(Input, "\n")] = '\0';

    // Array untuk menyimpan karakter yang sudah dicetak sebelumnya
    int isPrinted[256] = {0};  // Asumsi karakter dalam ASCII (256 karakter)

    // Memeriksa setiap karakter dalam string
    for (i = 0; Input[i] != '\0'; i++) {
        // Jika karakter sudah dicetak sebelumnya, lompat ke iterasi berikutnya
        if (isPrinted[(unsigned char)Input[i]] == 1) {
            continue;  // Lompat ke iterasi berikutnya
        }
        printf("%c", Input[i]);
        
        isPrinted[(unsigned char)Input[i]] = 1;
    }

    return 0;
}