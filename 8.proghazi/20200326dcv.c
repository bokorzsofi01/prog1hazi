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

void rendez(int tomb[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (tomb[j] > tomb[j + 1])
            {
                int tmp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = tmp;
            }
        }
    }
}

int benne_van(int tomb[], int meret, int szam)
{
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] == szam)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    srand(time(NULL));

    int n, also, felso;
    int tomb[100];
    int db = 0;

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    while (db < n)
    {
        int szam = randint(also, felso);

        if (!benne_van(tomb, db, szam))
        {
            tomb[db] = szam;
            db++;
        }
    }

    rendez(tomb, n);

    printf("A generalt szamok: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }

    return 0;
}