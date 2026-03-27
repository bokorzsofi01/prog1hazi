/*
megadott leghosszabb szó
Kérjünk be szavakat a felh.-tól ' * ' végjelig. A végén írassuk ki a leghosszabb szó hosszát!
Példa:
Adj meg szavakat '*' végjelig!
Szó: Aladar
Szó: Bela
Szó: *ok
Szó: Cecil
Szó: *
4 db szót adtál meg. A leghosszabb szó 6 karakterből áll.
Ehhez a feladathoz ne használjuk a prog1 library-t! A beolvasást az fgets() függvénnyel, manuálisan oldjuk meg.
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char szo[100];
    int db = 0;
    int max_hossz = 0;

    printf("Adj meg szavakat '*' vegjelig!\n");

    while(1) 
    {
        printf("Szo: ");
        fgets(szo, 100, stdin);
        if(strcmp(szo, "*\n") == 0) 
        {
            break;
        }

        int hossz = strlen(szo);

        if(szo[hossz - 1] == '\n') 
        {
            hossz--;
        }

        if(hossz > max_hossz) 
        {
            max_hossz = hossz;
        }

        db++;
    }

    printf("\n%d db szot adtal meg. ", db);
    printf("A leghosszabb szo %d karakterbol all.\n", max_hossz);

    return 0;
}