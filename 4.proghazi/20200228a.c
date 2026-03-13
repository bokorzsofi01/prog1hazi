/*
Megrajzolható háromszögek
Írjunk egy függvényt, ami egy háromszögről eldönti, hogy megszerkeszthető-e vagy sem.
A függvény neve legyen valid_triangle. Bemenetként kapjon három valós értéket, 
a háromszög három oldalának a hosszát. A kimenet egy logikai igaz vagy hamis érték legyen aszerint,ű
hogy a három oldalból megszerkeszthető-e egy háromszög vagy sem.
Deklaráljuk a függvényt.
Majd definiáljuk a függvényt.
Végül hívjuk meg a függvényt, próbáljuk ki, teszteljük.
Segítség
Minden oldal hossza legyen pozitív. A függvényen belül ezt ellenőrizzük le.
Egy háromszöget akkor tudunk megszerkeszteni, 
ha bármely két oldalának a hossza nagyobb, mint a harmadik oldal hossza.
Például a 3, 4, 5 értékekből megszerkeszthető egy háromszög; az 1, 2, 10 értékekből viszont nem.
*/

#include <stdio.h>

int valid_triangle(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
    {
        return 0; 
    }
    if(a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a = 3;
    int b = 4;
    int c = 5;

    if(valid_triangle(a,b,c))
    {
        printf("A haromszog megszerkesztheto.\n");
    }
    else
    {
        printf("A haromszog nem szerkesztheto meg.\n");
    }
    return 0;
}