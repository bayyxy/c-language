#include <stdio.h>

// Fungsi untuk menulis data mahasiswa ke file
void tulisData() {
    FILE *file = fopen("data_mahasiswa.txt", "a+");
    if (!file) {
        printf("Gagal membuka file.\n");
        return;
    }

    char nama[50], nim[20], prodi[50];

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Masukkan Program Studi: ");
    fgets(prodi, sizeof(prodi), stdin);

    fprintf(file, "%s%s%s", nama, nim, prodi);
    fclose(file);
    printf("Data berhasil disimpan.\n");
}

// Fungsi untuk membaca data mahasiswa dari file
void bacaData() {
    FILE *file = fopen("data_mahasiswa.txt", "r");
    if (!file) {
        printf("File tidak ditemukan.\n");
        return;
    }

    char nama[50], nim[20], prodi[50];
    fgets(nama, sizeof(nama), file);
    fgets(nim, sizeof(nim), file);
    fgets(prodi, sizeof(prodi), file);

    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Program Studi: %s", prodi);
    fclose(file);
}

int main() {
    int pilihan;
    do {
        printf("\nPilih aksi\n1. Tulis data mahasiswa\n2. Baca data mahasiswa\nMasukkan pilihan: ");
        scanf("%d", &pilihan);
        getchar(); // Membersihkan buffer input

        if (pilihan == 1) tulisData();
        else if (pilihan == 2) bacaData();
        else if (pilihan != 3) printf("Pilihan tidak valid.\n");
    } while (pilihan != 3);

    return 0;
}
