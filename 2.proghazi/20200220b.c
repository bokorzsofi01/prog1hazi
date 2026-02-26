/*
Páratlan számok visszafelé

Írjunk egy programot, amely beolvas egy pozitív egész számot (n), majd kiírja n-től 1-ig 
(zárt intervallum) visszafelé az összes páratlan számot!

Példa bemenet:

n: 7
A példa bemenethez tartozó kimenet:

7
5
3
1
*/

#include <stdio.h>
int main()
{
    int szam;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);

    for(int szam1 = szam; szam1 >= 1 ;szam1--)
    {
        if(szam1 % 2 == 1)
        {
            printf("%d\n", szam1);
        }
    }


    return 0;
}