// Felix Abdiel Siadari - 12S25043

#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int beratButet;
    int beratUcok;
    int totalBerat;
    int tarif;
    float totalOngkir;

    while (1) {

        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &beratButet);

        // perbandingan ukuran dus
        beratUcok = beratButet * 2;

        // menentukan tarif berdasarkan kota
        if (strcmp(kode, "MDN") == 0) {
            tarif = 10000;
        }
        else if (strcmp(kode, "JKT") == 0) {
            tarif = 15000;
        }
        else if (strcmp(kode, "BLG") == 0) {
            tarif = 8000;
        }
        else {
            printf("Kode kota tidak ditemukan\n");
            continue;
        }

        totalBerat = beratButet + beratUcok;
        totalOngkir = totalBerat * tarif;

        printf("===== STRUK PEMBAYARAN =====\n");
        printf("Kota Tujuan      : %s\n", kode);
        printf("Berat Paket Butet: %d kg\n", beratButet);
        printf("Berat Paket Ucok : %d kg\n", beratUcok);
        printf("Total Berat      : %d kg\n", totalBerat);

        if (totalBerat >= 10) {
            totalOngkir = totalOngkir * 0.9;
            printf("Promo            : Diskon 10%%\n");
        } 
        else {
            printf("Promo            : Tidak ada\n");
        }

        printf("Total Ongkir     : Rp %.0f\n", totalOngkir);
        printf("=============================\n\n");
    }

    return 0;
}