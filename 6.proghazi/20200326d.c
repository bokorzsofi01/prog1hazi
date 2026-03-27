/*
lottó
A) verzió
Írjunk programot, ami egy adott intervallumon generál N db véletlen számot.
Példa:
Hány db random számot kérsz?
5
Alsó határ: 1
Felső határ (zárt intervallum): 90
A generált számok: 7 23 88 45 65
A feladat általánosítva lett, vagyis minden paramétert a felh.-tól kérünk be.
Itt a kimenetben még lehetnek azonos számok.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int also, int felso)
{
    int veletlen = rand();
    int intervallum = felso - also + 1;

    veletlen = veletlen % intervallum;
    veletlen = also + veletlen;

    return veletlen;
}

int main()
{
    int n, also, felso;

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    srand(time(NULL));

    printf("\nA generalt szamok: ");

    for(int i = 0; i < n; i++) 
    {
        int r = randint(also, felso);
        printf("%d ", r);
    }

    printf("\n");

    return 0;
}