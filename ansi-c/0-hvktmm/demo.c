#include<iostream.h>
#include<conio.h>
INT main()
{
    INT i;
    clrscr();
    CHAR *tenmuc[]={"Muc thu nhat","Muc thu hai","Muc thu ba"};
    FOR(i=1;i<3;i++)
    {
        gotoxy(1,i+1);
      textbackground(0);
        textcolor(4);
        cprintf(tenmuc[ i ]);
    }
    gotoxy(1,1);
    textcolor(WHITE);
    cprintf(tenmuc[0]);
    CHAR ch;
    INT stt=0;
    WHILE(1)
    {
        ch=getch();
        IF(ch==0)
            ch=getch();
        SWITCH(ch)
        {
            CASE 72:

                stt--;
                IF(stt<0)
                {
                stt=2;
                    gotoxy(1,1);
                    textcolor(4);
                    cprintf(tenmuc[0]);
                    gotoxy(1,3);
                    textcolor(WHITE);
                    cprintf(tenmuc[stt]);
                }
                ELSE
                {

                gotoxy(1,stt+2);
                    textcolor(4);
                    cprintf(tenmuc[stt+1]);
                    gotoxy(1,stt+1);
                    textcolor(WHITE);
                    cprintf(tenmuc[stt]);
                }
                BREAK;

            CASE 80:
                stt++;
                IF(stt>2)
                {
                    gotoxy(1,3);
                    textcolor(4);
                    cprintf(tenmuc[2]);
                    stt=0;
                    gotoxy(1,1);
                    textcolor(WHITE);
                    cprintf(tenmuc[stt]);
                }
                ELSE
                {

                    gotoxy(1,stt);
                    textcolor(4);
                    cprintf(tenmuc[stt-1]);
                    gotoxy(1,stt+1);
                    textcolor(WHITE);
                    cprintf(tenmuc[stt]);
                }
                BREAK;

            CASE 13:RETURN 0;
        }
    }
}
