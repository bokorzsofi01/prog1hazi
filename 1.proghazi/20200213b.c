/*Téglalap
Írjunk egy programot, ami a felhasználótól bekéri egy téglalap oldalainak a hosszát (egész értékek).
 Írjuk ki a képernyőre a téglalap kerületét és területét.
Mind a beolvasásnál, mind a kiíratásnál informatív módon tájékoztassuk a felhasználót!*/

#include <stdio.h>

int main()
{
    int aoldal;
    int boldal;
    printf("Add meg az 'a' oldal hosszat: ");
    scanf("%d", &aoldal);
    printf("Add meg a 'b' oldal hosszat: ");
    scanf("%d", &boldal);

    int kerulet = 2*aoldal + 2*boldal;
    int terulet = aoldal*boldal;

    printf("A teglalap kerulete: %d cm\n", kerulet);
    printf("A teglalap teuülete: %d cm^2", terulet);

    return 0;

}