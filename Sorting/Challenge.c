#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int array[], int size)
{
int temp, j;
for(int i=0;i<size;i++){
temp = array[i];
j = i - 1;
while(array[j]>temp && j>=0){
array[j+1] = array[j];
j = j - 1;
  }
  array[j+1] = temp;
 }
}

void selectionSort (int array[], int size)
{
  for(int step=0; step < size-1; step++)
  {
    int min_idx = step;
    for (int i = step+1; i<size; i++)
    {
      if(array[i]<array[min_idx])
      min_idx = i;
    }
    swap(&array[min_idx],&array[step]);
  }
}

void cetakArray(int array[], int size)
{
  for(int i=0; i<size; ++i)
  {
    printf("%d ",array[i]);
  }
  printf("\n");
}
int main(){
    int pilihan;
    int data[]= {23, 67, 89, 5, 45, 20, 15, 27};
    int size = sizeof(data)/sizeof(data[0]);
    menu:
    system("cls");
    printf("1. Insertion Sorting\n");
    printf("2. Selection Sorting\n");
    printf("3. Exit\n");
    printf("Masukan Pilihan Menu : ");scanf("%d", &pilihan);
    switch(pilihan){
    case 1 :
     insertion_sort(data, size);
     printf("\nArray Ascending dengan Insertion Sorting = \n\n");
     cetakArray(data,size);
     getch();
     goto menu;
    case 2 :
     selectionSort(data, size);
     printf("\nArray Ascending dengan Selection Sorting = \n\n");
     cetakArray(data,size);
     getch();
     goto menu;
    case 3 :
      system("cls");
      printf("=====  Terima Kasih :3  =====");
      printf("\n=====Kireina - 672021227=====");
      getch();
      goto menu;
    }
}
