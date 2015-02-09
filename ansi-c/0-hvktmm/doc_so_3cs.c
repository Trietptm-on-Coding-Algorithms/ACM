/* Viet chuong trinh doc so co 3 chu so
Vi du:   123 : Mot tram hai muoi ba */
#include <stdio.h>
#include <conio.h>
int main()
{
    int so,a,b,c;
    char doc[][10] = {" ","Mot","Hai","Ba","Bon","Nam","Sau","Bay","Tam","Chin"};
    printf("\nNhap vao mot so co 3 chu so : ");  scanf("%d",&so);
    a = so/100;
    b = (so%100)/10;
    c = so%10;
    if (a!=0)
        if (b==0)
            if (c==0)
                printf("\n%s Tram.",doc[a]);
            else
                printf("\n%s Tram Linh %s.",doc[a],doc[c]);
        else
            if (b==1)
                printf("\n%s Tram Muoi.",doc[a]);
            else
                if (c==0)
                    printf("\n%s Tram %s Muoi.",doc[a],doc[b]);
                else
                    printf("\n%s Tram %s Muoi %s.",doc[a],doc[b],doc[c]);
    else
        if (b==0)
            if (c==0)
                printf("\nKhong.");
            else
                printf("\n%s.",doc[c]);
        else
            if (b==1)
                printf("\nMuoi %s",doc[c]);
            else
                if (c==0)
                    printf("\n%s Muoi.",doc[b]);
                else
                    printf("\n%s Muoi %s.",doc[b],doc[c]);
    getch();
    return (0);
}
