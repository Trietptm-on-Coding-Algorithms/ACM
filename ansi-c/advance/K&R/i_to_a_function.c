/* itoa(n, s) : convert integer to string */
#include <stdio.h>
#include <string.h>
#include <conio.h>

char* itoa(long n)
{
    static char s[100];
    char ch;
    if (n < 0)
    {
        strcat(s,"-");
        n = -n;
    }
    if (n / 10)
        itoa(n / 10);
    ch = (n % 10 + '0');
    strcat(s,(char[2]) { (char) ch, '\0' } );
    return s;
}

int main()
{
    printf("\n%s",itoa(1240004444));
    getch();
    return(0);
}
