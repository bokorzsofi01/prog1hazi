/*
különböző elemek száma
Kérjünk be egész számokat 0 végjelig az [1, 99] zárt intervallumból. A bevitel után írassuk ki, hogy hány különböző számot adtunk meg.
Példa:
Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!
Szám: 200
Ez a szám kívül esik az elfogadható intervallumon!
Szám: 3
Szám: 2
Szám: 5
Szám: 3
Szám: 3
Szám: 2
Szám: 0
3 db különböző szám lett megadva.
Ezek (növekvő sorrendben): 2, 3, 5
Az [1, 99] intervallumon kívülről ne fogadjunk el inputot. A végén még tüntessük fel a megadott különböző számokat is növekvő sorrendben.
*/

#include <stdio.h>

int main() 
{
    int szam;
    int volt[100] = {0};
    int db = 0;

    printf("Adj meg 0 vegjelig egesz szamokat az [1, 99] intervallumbol!\n");

    while(1) 
    {
        printf("Szam: ");
        scanf("%d", &szam);

        if(szam == 0) 
        {
            break;
        }

        if(szam < 1 || szam > 99) 
        {
            printf("Ez a szam kivul esik az elfogadhato intervallumon!\n");
            continue;
        }

        if(volt[szam] == 0) 
        {
            volt[szam] = 1;
            db++;
        }
    }

    printf("\n%d db kulonbozo szam lett megadva.\n", db);

    printf("Ezek (novekvo sorrendben): ");

    int elso = 1;
    for(int i = 1; i <= 99; i++) 
    {
        if(volt[i] == 1)
        {
            if(!elso) 
            {
                printf(", ");
            }
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n");

    return 0;
}