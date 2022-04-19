#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_STACK 10
typedef struct STACK {
    int top;
    char data[10][10];
};STACK tumpuk;

void inisialisasi(){
    tumpuk.top = -1;
    }

    int IsFull(){
        if(tumpuk.top == MAX_STACK-1) return 1; else return 0;
        }

int IsEmpty(){
        if(tumpuk.top == -1) return 1; else return 0;
        }

void Push(char d[10]){
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d);
    }

void Pop(){
    printf("Data yang terambil =%s\n",tumpuk.data[tumpuk.top]);
    tumpuk.top--;
    }

void Clear(){
    tumpuk.top=-1;
    }

void TampilStack(){
    for(int i=tumpuk.top;i>=0;i--)

int main(){
    int pil;
    inisialisasi();
    char dt[10];
    do{
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. print\n");
        printf("4. clear\n");
        printf("5. exit\n");
        printf("Pilihan : ");scanf("%d",&pil);

    switch(pil){
        case 1: if(IsFull() != 1){
                printf("Data = ");scanf("%s",dt); Push(dt);
                }
                else printf("\nSudah penuh!\n");
                break;
        case 2: if(IsEmpty() != 1)
                    Pop();
                else
                    printf("\nMasih kosong!\n");
                    break;
        case 3: if(IsEmpty() != 1)
                    TampilStack();
                else
                    printf("\nMasih kosong!\n");
                break;
        case 4: Clear();
                printf("\nSudah kosong!\n");
                break;
{
    printf("Data : %s\n",tumpuk.data[i]);
    }
        }
            }
                }
                    getch();
    }
        while(pil != 5); getch();
