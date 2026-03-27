/*
B) verzió
Módosítsuk úgy az előző programot, hogy ne csak egy szimpla karaktertömböt adjunk vissza, hanem egy sztringet. 
Ez a visszaadott sztring tartalmazza az angol ábécé kisbetűit.
Segítség
Mi a különbség egy sima karaktertömb és egy sztring között? A sztring végén van NUL karakter ('\0')
Link
https://asciichart.com
*/
#include <stdio.h>

#define meret 27

void feltolt(char s[])
{
    int j = 0;
    for(int i = 'a'; i <= 'z'; i++)
    {
        s[j] = i;
        j++;
    }
    s[j] = '\0';
}

int main()
{
    char abc[meret];

    feltolt(abc);

    printf("%s\n", abc);

    return 0;
}