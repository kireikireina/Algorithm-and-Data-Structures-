#include <stdio.h>
#include <stdlib.h>

struct tnode
    {
        int x;
        struct tnode *next;
    };
    struct tnode *head=NULL,*curr=NULL, *node=NULL;

int main()
{
    int i, n, j;
    printf("\t+----------------------+\n");
    printf("\t| Kireina - 672021227  |\n");
    printf("\t+----------------------+\n");
    printf("\n\t Masukkan Jumlah Data yang Diinginkan = ");
    scanf("%d", &n);

     for (i=1; i<=n; i++){
        printf("\n\t Masukkan Data ke-%d = ", i);
        scanf("%d", &j);
        node = (struct tnode *)malloc (sizeof(struct tnode));
        node -> x = j;
        if (head == NULL){
            head = node;
            curr = node;
        }
        else
        {
            curr -> next = node;
            curr = node;
        }
    }

    curr -> next = NULL;
    curr = head;


    while (curr != NULL)
    {
        printf("\n\t Data yang Telah Di-input = ");
        printf(" %d ", curr -> x);
        curr = curr -> next;
    }

    printf("\n");
}
