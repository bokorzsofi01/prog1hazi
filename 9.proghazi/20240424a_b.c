#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fajl = fopen(argv[1], "r");

    int max_hossz = 0;
    int max_sor = 0;
    int sor = 0;

    char sor_szoveg[20001];

    while(fgets(sor_szoveg, 20001, fajl) != NULL)
    {
        sor++;

        int hossz = strlen(sor_szoveg);

        if(sor_szoveg[hossz - 1] == '\n')
        {
            hossz--;
        }

        if(hossz > max_hossz)
        {
            max_hossz = hossz;
            max_sor = sor;
        }
    }

    fclose(fajl);

    printf("%d %d\n", max_sor, max_hossz);

    return 0;
}