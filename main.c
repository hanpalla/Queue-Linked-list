#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
struct penduduk
{
    char noKTP[20];
    char voucher[20];
    char nama[20];
};    
struct node
{
    struct penduduk;
    struct node *next;
};
struct node *head;
struct node *tail;
int main ()
{
    int menu;
    struct penduduk info;
    struct node *ptr;
    MENU:
    system("cls");
    puts("\t\t\tPROGRAM ANTRIAN SEMBAKO");
    puts("\nPilhan Menu yang tersedia\n1. Tambah Antrian\n2. Panggil Antrian\n3. Tampilkan Antrian\n4. Keluar");
    printf("\nPilih menu: ");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        ptr = (struct node*)malloc(sizeof(struct node));
        fflush(stdin);
        printf("Input nomor KTP\t\t: ");
        gets(info.noKTP);
        printf("Input nama\t\t: ");
        gets(info.nama);
        printf("Input nominal voucher\t: Rp.");
        gets(info.voucher);
        strcpy(ptr->noKTP,info.noKTP);
        strcpy(ptr->nama,info.nama);
        strcpy(ptr->voucher,info.voucher);
        if(head == NULL)
        {
            head = ptr;
            tail = ptr;
            head->next = NULL;
            tail->next = NULL;
        }
        else
        {
            tail->next = ptr;
            tail = ptr;
            tail->next = NULL;
        }
    break;
    
    case 2:
        if(head == NULL)
        {
            puts("Antrian kosong");
        }
        else
        {
            ptr = head;
            head = head->next;
            printf("Panggilan atas nama %s.\n\n",ptr->nama);
            free(ptr);
        }
        break;
 
    case 3:
        ptr = head;
        if(head == NULL)
        {
            puts("Antrian kosong");
        }
        else
        {
            puts("Data Antrian\n");
            while(ptr != NULL)
            {
                printf("%s\t\n",ptr->noKTP);
                printf("%s\t\n",ptr->nama);
                printf("Rp.%s\t\n\n",ptr->voucher);
                ptr = ptr->next;
            }
        }
        break;
 
    case 4:
        puts("Terima Kasih");
        system("pause");
        goto END;
        break;
 
    default:
        puts("Input invalid.\nSilahkan simak ulang menu yang tersedia");
        break;
    }
    system("pause");
    goto MENU;
    END:
    return 0;
}
