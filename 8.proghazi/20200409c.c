#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 1;
    }

    char sor[1000];
    int db = 0;

    while (fgets(sor, 1000, fp) != NULL)
    {
        db++;
    }

    printf("%d\n", db);

    fclose(fp);

    return 0;
}