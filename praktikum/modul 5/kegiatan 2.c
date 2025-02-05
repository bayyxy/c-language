#include <stdio.h>
int main() {
    int siswa, i, j;
    float rata_mat = 0, rata_fis = 0, rata_kim = 0, rata_keseluruhan = 0;
    float nilai[siswa][3];

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &siswa);

    for (i = 0; i < siswa; i++) {
        printf("Masukkan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia): ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &nilai[i][j]);
        }
    }
    for (i = 0; i < siswa; i++) {
        rata_mat += nilai[i][0];
        rata_fis += nilai[i][1];
        rata_kim += nilai[i][2];
    }

    rata_mat =rata_mat/siswa;
    rata_fis =rata_fis/siswa;
    rata_kim =rata_kim/siswa;
    rata_keseluruhan = (rata_mat + rata_fis + rata_kim) / 3;

    printf("\nData Nilai Ujian:\n");
    printf("Mahasiswa\tMatematika\tFisika\t\tKimia\n");
    for (i=0; i<siswa; i++) {
        printf("Mhs %d\t\t",i+1);
        for (j=0; j<3; j++) {
            printf("%.2f\t\t",nilai[i][j]);
        }
        printf("\n");
    }

    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", rata_mat);
    printf("Fisika: %.2f\n", rata_fis);
    printf("Kimia: %.2f\n", rata_kim);
    printf("Rata-rata Keseluruhan: %.2f\n", rata_keseluruhan);

    return 0;
}
