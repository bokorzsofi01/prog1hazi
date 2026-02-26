/*
1 → 2 → … → n

Írjon programot, ami bekér egy pozitív egész számot (n), majd 1-től n-ig (zárt intervallum) kiírja az egész számokat úgy, hogy a számok között legyen egy nyíl (" → "). Vegyük észre, hogy a nyíl előtt és után van egy-egy szóköz, ill. az utolsó elem után nincs semmi (se szóköz, se nyíl).

Példák:

n: 5

1 -> 2 -> 3 -> 4 -> 5
n: 1

1
*/


#include <stdio.h>

int main()
{

int szam;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);

    for(int szam1 = 1; szam1 <= szam ;szam1++)
    {
        if(szam1 != szam)
        {
            printf("%d ->", szam1);
        }
        else
        {
            printf("%d\n", szam1);
        }
    }

    return 0;
}