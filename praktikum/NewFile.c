#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100
#define MAX_PRODUCTS 100

void displayMenu() { // menampilkan menu
    printf("\nMenu:\n");
    printf("1. Tambah Produk Baru\n");
    printf("2. Tampilkan Daftar Produk\n");
    printf("3. Update Informasi Produk\n");
    printf("4. Hapus Produk\n");
    printf("5. Keluar\n");
}

int isIdExists(int id) {//membuat file
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL) return 0;

    int tempId;
    char tempLine[MAX_STRING];
    
    while (fgets(tempLine, sizeof(tempLine), file) != NULL) {
        sscanf(tempLine, "%d", &tempId);
        if (tempId == id) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

void addProduct() {//membuat produk
    int id;
    char name[MAX_STRING];
    char category[MAX_STRING];
    double price;
    int stock;
    
    printf("Masukkan ID produk: ");
    scanf("%d", &id);
    
    if (isIdExists(id)) {
        printf("ID ALREADY REGISTERED\n");
        return;
    }
    
    printf("Masukkan nama produk: ");
    scanf(" %[^\n]s", name);
    
    printf("Masukkan kategori produk: ");
    scanf(" %[^\n]s", category);
    
    printf("Masukkan harga produk: ");
    scanf("%lf", &price);
    
    printf("Masukkan stok produk: ");
    scanf("%d", &stock);
    
    FILE *file = fopen("produk_toko.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    fprintf(file, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
    fclose(file);
    
    printf("Produk berhasil ditambahkan!\n");
}

void showProducts() {//mengecek produk
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("No products found!\n");
        return;
    }

    printf("\nDaftar Produk:\n");
    char line[MAX_STRING];
    int id;
    char name[MAX_STRING];
    char category[MAX_STRING];
    double price;
    int stock;

    while (fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%[^,],%lf,%d", &id, name, category, &price, &stock);
        printf("ID: %d\n", id);
        printf("Nama: %s\n", name);
        printf("Kategori: %s\n", category);
        printf("Harga: %.2f\n", price);
        printf("Stok: %d\n\n", stock);
    }
    fclose(file);
}

void updateProduct() {//mengupdate produk
    int searchId;
    printf("Masukkan ID produk yang akan diupdate: ");
    scanf("%d", &searchId);
    
    if (!isIdExists(searchId)) {
        printf("Produk tidak ditemukan!\n");
        return;
    }
    
    FILE *file = fopen("produk_toko.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    
    char line[MAX_STRING];
    int id;
    char name[MAX_STRING];
    char category[MAX_STRING];
    double price;
    int stock;
    
    while (fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%[^,],%lf,%d", &id, name, category, &price, &stock);
        
        if (id == searchId) {
            printf("Masukkan nama produk baru: ");
            scanf(" %[^\n]s", name);
            printf("Masukkan kategori produk baru: ");
            scanf(" %[^\n]s", category);
            printf("Masukkan harga produk baru: ");
            scanf("%lf", &price);
            printf("Masukkan stok produk baru: ");
            scanf("%d", &stock);
        }
        fprintf(temp, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
    }
    
    fclose(file);
    fclose(temp);
    
    remove("produk_toko.txt");
    rename("temp.txt", "produk_toko.txt");
    
    printf("Produk berhasil diupdate!\n");
}

void deleteProduct() {//menghapus produk
    int searchId;
    printf("Masukkan ID produk yang akan dihapus: ");
    scanf("%d", &searchId);
    
    if (!isIdExists(searchId)) {
        printf("Produk tidak ditemukan!\n");
        return;
    }
    
    FILE *file = fopen("produk_toko.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    
    char line[MAX_STRING];
    int id;
    char name[MAX_STRING];
    char category[MAX_STRING];
    double price;
    int stock;
    
    while (fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%[^,],%lf,%d", &id, name, category, &price, &stock);
        if (id != searchId) {
            fprintf(temp, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
        }
    }
    
    fclose(file);
    fclose(temp);
    
    remove("produk_toko.txt");
    rename("temp.txt", "produk_toko.txt");
    
    printf("Produk berhasil dihapus!\n");
}

int main() {
    printf("Selamat datang di program Manajemen Toko Elektronik\n");
    
    int choice;
    do {
        displayMenu();
        printf("Masukkan pilihan: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addProduct();
                break;
            case 2:
                showProducts();
                break;
            case 3:
                updateProduct();
                break;
            case 4:
                deleteProduct();
                break;
            case 5:
                printf("Terima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (choice != 5);
return 0;
}