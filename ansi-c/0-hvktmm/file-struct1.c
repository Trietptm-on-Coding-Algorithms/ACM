/* Nhap danh sach sinh vien => ghi vao file
qua trinh nhap dung khi nhan Enter.
- Doc danh sach ra de sap xep.
- Nhap them 1 sinh vien => Chen vao danh sach dung thu tu.
- Ghi lai vao file. */

#include <stdio.h>
#include <malloc.h>
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

void Input();
void Read();
void Write();
void Insert();
void Get_ten(char hoten[25],char ten[10]);
void SortDTB(SV *mang, int n);
void SortHoten(SV *mang, int n);
void Output(SV *mang, int n);

FILE *f;
SV *ds;
char n;

void main()
{
    Input();
    ds = (SV *) malloc (n*sizeof(SV));
    Read();
    system("cls");
    printf("\n            DANH SACH SAP XEP THEO DIEM TRUNG BINH\n");
    SortDTB(ds,n);
    Insert();
    /*printf("\n\n            ======================================\n");
    printf("\n                 DANH SACH SAP XEP THEO TEN\n");
    SortHoten(ds,n);*/
}

void Input()
{
    SV sv;
    char ch, i=0;
    f = fopen("DS.DAT","w+b");
    do
    {
        system("cls");
        printf("\nNhap du lieu cho sinh vien thu %d : ",++i);  fflush(stdin);
        printf("\n- Ho ten : ");  gets(sv.hoten);              fflush(stdin);
        printf("\n- Diem Toan, ly, Hoa : "); scanf("%f %f %f",&sv.diem.toan,&sv.diem.ly,&sv.diem.hoa);  fflush(stdin);
        sv.dtb = (float) ((sv.diem.toan+sv.diem.ly+sv.diem.hoa)/3);
        printf("\n--------------------------------------");
        printf("\nBan co muon nhap tiep ko ? [C/K] ");  scanf("%c",&ch);
        fwrite(&sv,sizeof(SV),1,f);
    }
    while (toupper(ch)!='K');
    n = i;
    fclose(f);
}

void Read()
{
    int i;
    f = fopen("DS.DAT","r+b");
    for (i=0; i<n; i++)
        fread(&ds[i],sizeof(SV),1,f);
    fclose(f);
}

void Write()
{
    int i;
    f = fopen("DS.DAT","w+b");
    for (i=0; i<n; i++)
        fwrite(&ds[i],sizeof(SV),1,f);
    fclose(f);
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
        if (hoten[k]!=' ')
                {
                    ten[t] = hoten[k];
                    t++;
                }
}

void Insert()
{
    SV sv;
    char ch, i, index=0;
    system("cls");
    printf("\nNhap du lieu cho sinh vien muon chen : ");  fflush(stdin);
    printf("\n- Ho ten : ");  gets(sv.hoten);             fflush(stdin);
    printf("\n- Diem Toan, ly, Hoa : "); scanf("%f %f %f",&sv.diem.toan,&sv.diem.ly,&sv.diem.hoa);  fflush(stdin);
    sv.dtb = (float) ((sv.diem.toan+sv.diem.ly+sv.diem.hoa)/3);
    n++;
    while (ds[index].dtb<sv.dtb) index++;
    for (i=n; i>index; i--)
        ds[i] = ds[i-1];
    ds[index] = sv;
    Output(ds,n);
}
