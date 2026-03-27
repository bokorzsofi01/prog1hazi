/*
tömbről másolat
Írjunk programot, ami a következőképpen működik:
Hány db számot szeretnél bevinni?
5
1. szám: -2
2. szám: 3
3. szám: -7
4. szám: 9
5. szám: 2
A bevitt számok abszolútértékei: 2, 3, 7, 9, 2
A megadott számok: -2, 3, -7, 9, 2
Vagyis: a felh.-tól kérdezzük meg, hogy hány db számot szeretne megadni, majd kérjünk be tőle pontosan ennyi egész értéket. 
Ezeket tároljuk el egy tömbben. A tömbről készítsünk egy másolatot, s ebben a másolatban a bevitt számok abszolútértékét tároljuk le.
A program végén írassuk ki a másolat tömb tartalmát (ami az abszolútértékeket tartalmazza), majd az eredeti tömb tartalmát.
A kiíratás a fenti módon történjen! Minden elem közé vessző és szóköz, az utolsó elem után csak sortörés.
Megjegyzés
Ezt meg lehetne oldani extra tömb nélkül is, de most arra vagyok kíváncsi, hogy egy tömbről hogyan tudunk másolatot készíteni.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;

    printf("Hany db szamot szeretnel bevinni? ");
    scanf("%d", &n);

    int eredeti[n];
    int masolat[n];

    for(int i = 0; i < n; i++) 
    {
        printf("%d. szam: ", i + 1);
        scanf("%d", &eredeti[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        if(eredeti[i] < 0) 
        {
            masolat[i] = -eredeti[i];
        }
        else 
        {
            masolat[i] = eredeti[i];
        }
    }

    printf("\nA bevitt szamok abszolutertekei: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d", masolat[i]);
        if(i < n - 1) 
        {
            printf(", ");
        }
    }
    printf("\n");

    printf("A megadott szamok: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d", eredeti[i]);
        if(i < n - 1) 
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}