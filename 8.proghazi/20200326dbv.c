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

int main()
{
    srand(time(NULL));

    int n, also, felso;
    int tomb[100];

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    for (int i = 0; i < n; i++)
    {
        tomb[i] = randint(also, felso);
    }

    rendez(tomb, n);

    printf("A generalt szamok: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }

    return 0;
}