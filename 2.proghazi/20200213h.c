/*
Ezernél kisebb pozitív egész számok (PE #1)

Ha felsoroljuk a 10-nél kisebb pozitív egész számokat, melyek 3-nak vagy 5-nek a többszörösei, akkor a köv. számokat kapjuk: 3, 5, 6 és 9. Ezek összege 23.

Állapítsuk meg azon 1000-nél kisebb számok összegét, melyek 3-nak vagy 5-nek a többszörösei.
*/

#include <stdio.h>

int main()
{
    int i = 1;
    int osszeg = 0;

    while(i<1001)
    {
        if(i % 2 == 1)
        {
            osszeg = i + osszeg;
        }
        i++;
    }
    printf("Osszeg: %d", osszeg);

    return 0;
}