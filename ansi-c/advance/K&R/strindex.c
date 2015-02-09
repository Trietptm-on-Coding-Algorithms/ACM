/* strindex:  return right index of t in s, -1 if none */
#include <stdio.h>
#include <conio.h>

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
        return i+strlen(t); // Right index = index + length
    }
    return -1;
}
int main()
{
    char s1[]="xyzt xcong hoa xa hoi", s2[]="con";
    printf("\nStrindex: %d.",strindex(s1,s2));
    getch();
    return(0);
}
