#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fajl = fopen("nevek.csv", "r");

    char nevek[100][100];
    int db = 0;

    char sor[100];

    while(fgets(sor, 100, fajl) != NULL)
    {
        char nev[100];
        char kor[100];
        char szak[100];

        int i = 0;
        int j = 0;

        while(sor[i] != ',')
        {
            nev[j] = sor[i];
            i++;
            j++;
        }

        nev[j] = '\0';

        i++;
        j = 0;

        while(sor[i] != ',')
        {
            kor[j] = sor[i];
            i++;
            j++;
        }

        kor[j] = '\0';

        i++;
        j = 0;

        while(sor[i] != '\n' && sor[i] != '\0')
        {
            szak[j] = sor[i];
            i++;
            j++;
        }

        szak[j] = '\0';

        for(i = 0; szak[i] != '\0'; i++)
        {
            szak[i] = toupper(szak[i]);
        }

        if(strcmp(szak, "PTI") == 0)
        {
            nev[0] = toupper(nev[0]);

            for(i = 1; nev[i] != '\0'; i++)
            {
                nev[i] = tolower(nev[i]);
            }

            strcpy(nevek[db], nev);
            db++;
        }
    }

    fclose(fajl);

    for(int i = 0; i < db - 1; i++)
    {
        for(int j = i + 1; j < db; j++)
        {
            if(strcmp(nevek[i], nevek[j]) > 0)
            {
                char temp[100];

                strcpy(temp, nevek[i]);
                strcpy(nevek[i], nevek[j]);
                strcpy(nevek[j], temp);
            }
        }
    }

    for(int i = 0; i < db; i++)
    {
        printf("%s", nevek[i]);

        if(i < db - 1)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}