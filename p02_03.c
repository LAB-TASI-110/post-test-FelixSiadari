// Felix Abdiel Siadari - 12S25043 

#include <stdio.h>

int main() {

    int pilihan;
    int jumlah;
    int harga = 0;
    int total;

    printf("===== SISTEM KAFETARIA IT DEL =====\n");
    printf("Daftar Menu:\n");
    printf("1. Nasi Goreng  - 15000\n");
    printf("2. Mie Goreng   - 12000\n");
    printf("3. Ayam Goreng  - 18000\n");
    printf("4. Teh Manis    - 5000\n");
    printf("5. Kopi         - 7000\n");
    printf("-----------------------------------\n");

    printf("Masukkan pilihan menu (1-5): ");
    scanf("%d", &pilihan);

    printf("Masukkan jumlah pesanan: ");
    scanf("%d", &jumlah);

    if(pilihan == 1){
        harga = 15000;
    }
    else if(pilihan == 2){
        harga = 12000;
    }
    else if(pilihan == 3){
        harga = 18000;
    }
    else if(pilihan == 4){
        harga = 5000;
    }
    else if(pilihan == 5){
        harga = 7000;
    }
    else{
        printf("Menu tidak tersedia\n");
        return 0;
    }

    total = harga * jumlah;

    printf("\n===== STRUK PEMBAYARAN =====\n");
    printf("Harga Satuan : %d\n", harga);
    printf("Jumlah       : %d\n", jumlah);
    printf("Total Bayar  : %d\n", total);
    printf("============================\n");

    return 0;
}