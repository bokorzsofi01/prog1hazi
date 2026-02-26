/*
Egész számok összege 1-től 100-ig

Van egy jól ismert történet Karl Friedrich Gaussról. Mikor általános iskolás volt,
 a matematika tanár azt a feladatot adta a gyerekeknek, hogy adják össze az egész számokat 1-től 100-ig.
A tanár úgy gondolta, hogy ez majd jól leköti a kis nebulókat, de Gauss fél perc múlva már mondta 
is a helyes eredményt.

Feladat

Írjunk programot, ami kiszámolja az egész számok összegét 1-től 100-ig.
*/
#include <stdio.h>

int main()
{
    int i =1;
    int osszeg = 0;
    while(i<101)
    {
        osszeg = i + osszeg;
        i++;
    }
    printf("A szamok osszege: %d", osszeg);

    return 0;
}