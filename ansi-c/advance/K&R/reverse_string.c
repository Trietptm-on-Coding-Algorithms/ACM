/* reverse string function*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

char* reverse(char str[], int i)
{
    static char t[]="";
    fflush(stdin);
    t[i-1] = str[strlen(str)-i];
    if (i>1)
        reverse(str,i-1);
    return t;
}

int main()
{
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    printf("\nReverse String: %s.",reverse(s,strlen(s)));
    getch();
    return(0);
}
