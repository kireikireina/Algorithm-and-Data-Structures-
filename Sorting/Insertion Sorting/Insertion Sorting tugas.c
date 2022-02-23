#include <stdio.h>

int main(){
    int array[100], n, i, j, swap;
  printf("\n\t=================================================");
  printf("\n\t|    Insertion Sorting - Kireina (672021227)\t|");
  printf("\n\t=================================================\n");
  printf("\nMasukan Jumlah Elemen yang Diinginkan = ");
  scanf("%d", &n);
  printf("\nMasukan Angka Sebanyak %d kali = \n\n", n);
    for(i=0;i<n;i++)
        scanf("%d", &array[i]);
    for(i=1;i<=n-1;i++){
        for(j=i;j>0&&array[j-1]>array[j];j--){
            swap = array[j];
            array[j] = array[j-1];
            array[j-1] = swap;
        }
    }
    printf("\nArray yang Telah Diurutkan (Ascending) =\t");
    for(i=0;i<n;i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}
