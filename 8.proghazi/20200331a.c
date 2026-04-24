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

void min_max_atlag(int tomb[], int n, int *min, int *max, double *atlag)
{
    int osszeg = 0;

    *min = tomb[0];
    *max = tomb[0];

    for (int i = 0; i < n; i++)
    {
        if (tomb[i] < *min)
        {
            *min = tomb[i];
        }

        if (tomb[i] > *max)
        {
            *max = tomb[i];
        }

        osszeg += tomb[i];
    }

    *atlag = (double)osszeg / n;
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

    int min, max;
    double atlag;

    min_max_atlag(tomb, 10, &min, &max, &atlag);

    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek atlaga: %.1f\n", atlag);

    return 0;
}