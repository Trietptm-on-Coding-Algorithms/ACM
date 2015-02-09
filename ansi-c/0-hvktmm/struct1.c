/*
- Dinh nghia 1 struct: sinhvien(hoten,diem). diem(toan,ly,hoa).
- XD 1 ham:
    + nhap danh sach (nhap du lieu cho n sinh vien)
    + in danh sach
    + sap xep (theo diem trung trinh)
    + sap xep (theo ten, tach lay ten tu thanh phan tu ho ten */

#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    float toan, ly, hoa;
} D;

typedef struct
{
    char hoten[30];
    D diem;
    float dtb;
} SV;

void Input(SV *mang, int n);
void Get_ten(char hoten[25],char ten[10]);
void SortDTB(SV *mang, int n);
void SortHoten(SV *mang, int n);
void Output(SV *mang, int n);

void main()
{
    SV *ds;
    int i, n;
    printf("\nNhap so luong sinh vien : ");  scanf("%d",&n);
    ds = (SV *) malloc (n*sizeof(SV));
    Input(ds,n);
    system("cls");
    printf("\n            DANH SACH SAP XEP THEO DIEM TRUNG BINH\n");
    SortDTB(ds,n);
    printf("\n\n            ======================================\n");
    printf("\n                 DANH SACH SAP XEP THEO TEN\n");
    SortHoten(ds,n);
}

void Input(SV *mang, int n)
{
    int i;
    system("cls");
    for (i=0; i<n; i++)
    {
        printf("\nNhap du lieu cho sinh vien thu %d : ",i+1);          fflush(stdin);
        printf("\n- Ho ten : ");  gets(mang[i].hoten);              fflush(stdin);
        printf("\n- Diem Toan, ly, Hoa : "); scanf("%f %f %f",&mang[i].diem.toan,&mang[i].diem.ly,&mang[i].diem.hoa);  fflush(stdin);
        mang[i].dtb = (float) ((mang[i].diem.toan+mang[i].diem.ly+mang[i].diem.hoa)/3);
        printf("\n--------------------------------------");
    }
}

void SortDTB(SV *mang, int n)
{
    SV temp;
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

void Output(SV *mang, int n)
{
    int i;
        printf("\n STT        Ho Ten            Diem Toan     Diem ly     Diem hoa");
    for (i=0; i<n; i++)
    {
        while (strlen(mang[i].hoten)<21)  strcat(mang[i].hoten," ");
        printf("\n%3d   %s %9.2f     %7.2f     %8.2f ",i+1,mang[i].hoten,mang[i].diem.toan,mang[i].diem.ly,mang[i].diem.hoa);
    }
    getch();
}
