#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("valos_szamok.txt", "r");

    if (fp == NULL)
    {
        printf("Nem sikerult megnyitni a fajlt!\n");
        return 1;
    }

    char sor[200];
    double osszeg = 0.0;

    while (fgets(sor, 200, fp) != NULL)
    {
        for (int i = 0; sor[i] != '\0'; i++)
        {
            if (sor[i] == ',')
            {
                sor[i] = '.';
            }
        }

        osszeg += atof(sor);
    }

    printf("%.20lf\n", osszeg);

    fclose(fp);

    return 0;
}