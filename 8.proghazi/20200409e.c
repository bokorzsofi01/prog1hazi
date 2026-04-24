#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *be = fopen("in.txt", "r");

    if (be == NULL)
    {
        printf("Nem sikerult megnyitni az in.txt fajlt!\n");
        return 1;
    }

    printf("# in.txt sikeresen megnyitva\n");

    FILE *ki = fopen("out.txt", "w");

    if (ki == NULL)
    {
        printf("Nem sikerult letrehozni az out.txt fajlt!\n");
        fclose(be);
        return 1;
    }

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    char sor[200];
    double szam;
    int db = 0;

    while (fgets(sor, 200, be) != NULL)
    {
        szam = atof(sor);

        if (szam > 0.5)
        {
            fprintf(ki, "%s", sor);
            db++;
        }
    }

    printf("# szures vege\n");

    fclose(be);
    fclose(ki);

    printf("# out.txt bezarva\n");
    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", db);

    return 0;
}