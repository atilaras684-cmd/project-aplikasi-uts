#include <stdio.h>

int main() {
    
    char nama_peminjam[30];
    int pinjaman, bunga, bulan, bayar;
    float total, cicilan, sisa;
    int cek_modulus;

    printf("=======================\n");
    printf("       TEMAN TAGIH     \n");
    printf("=======================\n");

    printf("Nama Peminjam: ");
    scanf("%29s", nama_peminjam); 

    printf("Jumlah Pinjaman: ");
    scanf("%d", &pinjaman);

    printf("Total Bunga: ");
    scanf("%d", &bunga);

    printf("Lama Cicilan: ");
    scanf("%d", &bulan);

    printf("Sudah Bayar: ");
    scanf("%d", &bayar);

    total = pinjaman + (pinjaman * bunga / 100);
    cicilan = total / bulan;
    sisa = total - bayar;
    cek_modulus = (int)total % (int)cicilan;



    printf("\n=================\n");
    printf("        HASIL        ");
    printf("\n=================\n");

    printf("Nama Peminjam: %s\n", nama_peminjam);
    printf("Total Hutang: %.0f\n", total);
    printf("Jumlah Cicilan: %.0f\n", cicilan);
    printf("Sisa Hutang: %.0f\n", sisa);
    printf("Sisa Pembagian: %d\n", cek_modulus); 


    return 0;
}