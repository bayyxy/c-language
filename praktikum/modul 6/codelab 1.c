#include <stdio.h>

int long long faktorial(int n) {
    if (n == 0 || n == 1) 
        return 1; 
    return n * faktorial(n - 1); // Rekursi
}

// Fungsi rekursif untuk menghitung suku Fibonacci
int fibonacci(int n) {
    if (n == 0) 
        return 0; 
    if (n == 1) 
        return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); // Rekursi
}

int main() {
    int angka, suku;
    
    // Input untuk faktorial
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
    if (angka < 0) {
        printf("Faktorial tidak dapat dihitung untuk angka negatif.\n");
    } else {
        printf("Faktorial dari %d adalah: %lld\n", angka, faktorial(angka));
    }

    // Input untuk deret Fibonacci
    printf("Masukkan angka untuk menghasilkan deret Fibonacci: ");
    scanf("%d", &suku);
    if (suku < 0) {
        printf("Deret Fibonacci tidak valid untuk angka negatif.\n");
    } else {
        printf("Deret Fibonacci hingga suku ke-%d adalah: ", suku);
        for (int i = 0; i < suku; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    
    return 0;
}
