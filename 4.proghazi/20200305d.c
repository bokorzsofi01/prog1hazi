/*
2026
Írjon egy C programot, ami kiírja a 2026-ot úgy, hogy a forráskódban egyetlen számjegyet sem használ.
$ ./happy_new_year
2026
$ cat happy_new_year.c | grep "[[:digit:]]"
$
Vigyázat! Ha a programot jövőre futtatom, akkor is ugyanezt írja ki (azaz a 2026-ot)!
A trükközők figyelmébe
Fájlkezelés nem megengedett, vagyis a 2026-ot nem egy fájlból kellene beolvasni. Ugyanígy az internetről való letöltés sem fogadható el. 
Ha a programot átmásoljuk egy frissen telepített gépre, ami nincs hálózatra kötve, s elindítjuk, akkor is fusson le rendesen, 
függetlenül attól, hogy milyen nevű könyvtárba tettük be.
Vegyük észre, hogy a példában a programnak semmilyen parancssori argumentumot sem adunk át!
*/

#include <stdio.h>

int main()
{
    putchar(('C'-'A') + '0');
    putchar(('A'-'A') + '0');
    putchar(('C'-'A') + '0');
    putchar(('G'-'A') + '0');
    putchar('\n');
    return 0;
}