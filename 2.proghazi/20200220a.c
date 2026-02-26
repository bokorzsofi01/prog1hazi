/*
Néggyel osztható számok

Írjunk egy programot, amely beolvas egy pozitív egész számot (n), majd kiírja 1-től n-ig (zárt intervallum)
az összes néggyel osztható számot!

Példa bemenet:

n: 13
A példa bemenethez tartozó kimenet:
4
8
12
*/

#include <stdio.h>
int main()
{
    int szam;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);

    for(int i = 1; i<=szam;i++)
    {
        if(i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }



    return 0;
}