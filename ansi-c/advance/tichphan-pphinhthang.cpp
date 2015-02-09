#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>  
#include <math.h>  
double f(float x)  
{  
    double tri ;  
    double y;  
    y = -x*x ;  
    tri = exp(y) ;  
    return tri ;  
}  
int main()  
{  
    int i,m,n ;  
    double a,b,h,epsilon ;  
    double s0,s1,s2,i1,i2;  
    printf("\n\n--------------------------------------------------------------------------------\n");  
    printf("\n - Nhap can tren a = ");  
    scanf("%lf",&a);  
    printf("\n - Nhap can duoi b = ");  
    scanf("%lf",&b);  
    printf("\n - Sai so epsilon = ");  
    scanf("%lf",&epsilon);  
    s1 = 0;  
    s2 = 0;  
    n = 1 ;  
    h = b - a ;  
    s0 = f(a) + f(b) ;  
    i2 = h*s0/2.0 ;  
    printf("\n\n--------------- TINH TICH PHAN BANG PHUONG PHAP HINH THANG ---------------------\n");  
    bool t = false ;  
    do  
    {  
        i1 = i2 ;  
        s1 +=s2 ;  
        m = 2*n ;  
        h/=2 ;  
        s2 = 0 ;  
        for (i = 1 ; i <= n ;i++) s2 +=f( a + (2*i -1)*h ) ;  
        n = m ;  
        i2 = h*(s0 + 2*s1 + 2*s2)/2.0 ;  
        if ( fabs(i2 - i1)<epsilon )  
        {  
            t = true ;  
            printf("\n\n - Tich phan I = %-12.3lf" ,i2);  
        }  
    } while (!t) ;  
    getch();  
    return 0;  
}  
