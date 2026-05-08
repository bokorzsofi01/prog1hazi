#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    int min_hossz = strlen(argv[1]);

    for(int i = 2; i < argc; i++)
    {
        int hossz = strlen(argv[i]);

        if(hossz < min_hossz)
        {
            min_hossz = hossz;
        }
    }

    for(int i = 1; i < argc; i++)
    {
        int hossz = strlen(argv[i]);

        if(hossz == min_hossz)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}