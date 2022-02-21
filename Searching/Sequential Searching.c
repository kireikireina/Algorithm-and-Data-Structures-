#include <stdio.h>

int main (){
    int n, Data[10], i, cari, jumlah = 0;
    printf("Input jumlah data : ");scanf("%d", &n);
    printf("Masukan %d integer(s) : \n", n);
    for (i=0; i<n; i++)
        scanf("%d", &Data[i]);

    printf("Masukan angka yang mau dicari : ");
    scanf("%d", &cari);
    for(i=0; i<n; i++){
        if (Data[i]==cari)
        {
            printf("Angka %d yang dicari KETEMU, dan disimpan di lokasi/indeks %d\n", cari, i+1);
            jumlah++;
        }
        if (jumlah == 0)
            printf("Angka %d TIDAK DITEMUKAN", cari);
        else
            printf("Angka %d KETEMU sebanyak %d kali dalam array", cari, jumlah);
        return 0;
    }
}
