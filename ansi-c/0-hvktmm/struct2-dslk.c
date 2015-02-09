/* thuc hien bt 1 voi danh sach lien ket dong
chen
xoa */

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>

typedef struct
{
    float toan, ly, hoa;
} D;

typedef struct
{
    char hoten[30];
    D diem;
    float dtb;
    struct SV *next;
} SV;

void Input();
void Get_ten(char hoten[25],char ten[10]);
void SortDTB();
void SortHoten();
void Output();

SV *first, *last, *p;

void main()
{
    Input();
    system("cls");
    Output();
    //printf("\n            DANH SACH SAP XEP THEO DIEM TRUNG BINH\n");
    //SortDTB(ds,n);
    //printf("\n\n            ======================================\n");
    //printf("\n                 DANH SACH SAP XEP THEO TEN\n");
    //SortHoten(ds,n);
}

void Input()
{
    char ch, stt=0;
    printf("\nNhap danh sach sinh vien : ");
    first = NULL;
    do
    {
		printf("\nNhap du lieu cho sinh vien thu %d : ",++stt);
        printf("\n- Ho ten : ");  gets(p->hoten);  fflush(stdin);
        printf("\n- Diem Toan, ly, Hoa : "); scanf("%f %f %f",&p->diem.toan,&p->diem.ly,&p->diem.hoa);  fflush(stdin);
        p = (SV *) malloc (sizeof(SV));
        p->dtb = (float)(p->diem.toan + p->diem.ly + p->diem.hoa)/3;
        if  (first == NULL)
        {
            first = p;
            last = p;
        }
        else
        {
            last->next = p;
            last = p;
        }
        p->next = NULL;
        printf("\nCo nhap tiep ko ? [C/K] ");  scanf("%c",&ch);
    }
    while (toupper(ch)!='C');
}

void SortDTB()
{
    int i,j;
    for (i=0; i<=n; i++)
        for (j=i+1; j<n; j++)
        if (mang[i].dtb>mang[j].dtb)
        {
            temp = mang[i];  mang[i] = mang[j];  mang[j] = temp;
        }
    Output(mang,n);
}

void SortHoten(SV *mang, int n)
{
    SV temp;
    int i,j,k,t;
    char ten1[10],ten2[10];
    for (i=0; i<=n; i++)
        for (j=i+1; j<n; j++)
        {
            Get_ten(mang[i].hoten,ten1);
            Get_ten(mang[j].hoten,ten2);
            if (strcmp(ten1,ten2)>0)
            {
            temp = mang[i];  mang[i] = mang[j];  mang[j] = temp;
            }
        }
    Output(mang,n);
}

void Get_ten(char hoten[25],char ten[10])
{
    int i,k,t=0;
    strcpy(ten,"");
    for (k=strlen(hoten);k>=0;k--)
        if (hoten[k]!='\n')
                {
                    ten[t] = hoten[k];
                    t++;
                }
}

void Output()
{
    int i;
    printf("\n STT        Ho Ten            Diem Toan     Diem ly     Diem hoa");
    p = first;
    while (p != NULL)
    {
        while (strlen(mang[i].hoten)<21)  strcat(mang[i].hoten," ");
        printf("\n%3d   %s %9.2f     %7.2f     %8.2f ",i+1,p->hoten,p->diem->toan,p->diem->ly,p->diem->hoa);
        p = p->tiep;
    }
    getch();
}
