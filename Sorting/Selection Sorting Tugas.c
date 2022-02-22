#include <stdio.h>
int selectionSort(int arr[], int n){
  int i, j, posisi, swap;
  for(i = 0; i < (n-1); i++){
    posisi = i;
    for (j = i + 1; j < n; j++){
      if(arr[posisi] > arr[j]){
        posisi = j;
      }
    }
    if(posisi != i){
      swap = arr[i];
      arr[i] = arr[posisi];
      arr[posisi] = swap;
    }
  }
}
int main(){
  int array[5], n, i, j;
  printf("\n\t=================================================");
  printf("\n\t|    Selection Sorting - Kireina (672021227)\t|");
  printf("\n\t=================================================\n");
  printf("\n\tMasukan Jumlah Elemen yang Diinginkan = ");
  scanf("%d", &n);
  printf("\n\tMasukan Angka Sebanyak %d kali = \n\n", n);printf("\t");
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
    printf("\t");
  }
  selectionSort(array, n);
  printf("\n\tArray yang Telah Diurutkan (Ascending) = ");
  for(i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}
