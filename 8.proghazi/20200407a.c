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

typedef struct
{
    int min;
    int max;
    double atlag;
} Adatok;

Adatok min_max_atlag(int tomb[], int n)
{
    Adatok eredmeny;
    int osszeg = 0;

    eredmeny.min = tomb[0];
    eredmeny.max = tomb[0];

    for (int i = 0; i < n; i++)
    {
        if (tomb[i] < eredmeny.min)
        {
            eredmeny.min = tomb[i];
        }

        if (tomb[i] > eredmeny.max)
        {
            eredmeny.max = tomb[i];
        }

        osszeg += tomb[i];
    }

    eredmeny.atlag = (double)osszeg / n;

    return eredmeny;
}

int main()
{
    srand(time(NULL));

    int tomb[10];

    for (int i = 0; i < 10; i++)
    {
        tomb[i] = randint(10, 99);
    }

    printf("A tomb elemei: ");

    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
        {
            printf("%d, ", tomb[i]);
        }
        else
        {
            printf("%d\n", tomb[i]);
        }
    }

    Adatok adat = min_max_atlag(tomb, 10);

    printf("Legkisebb elem: %d\n", adat.min);
    printf("Legnagyobb elem: %d\n", adat.max);
    printf("Az elemek atlaga: %.1f\n", adat.atlag);

    return 0;
}