// Felix Abdiel Siadari - 12S25043

#include <stdio.h>

int main() {

    int N;
    int stok[100];
    int i;
    int total = 0;
    char kategori;

    // input jumlah data
    scanf("%d", &N);

    // input deret stok
    for(i = 0; i < N; i++) {
        scanf("%d", &stok[i]);
    }

    // input kategori
    scanf(" %c", &kategori);

    // proses penjumlahan
    for(i = 0; i < N; i++) {

        if(kategori == 'A') {
            if(i % 2 == 0) {
                total += stok[i];
            }
        }

        else if(kategori == 'B') {
            if(i % 2 != 0) {
                total += stok[i];
            }
        }
    }

    // output
    printf("%d\n", total);

    return 0;
}