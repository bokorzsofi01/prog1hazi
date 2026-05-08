#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    int sorok = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    for(int i = 0; i < sorok; i++)
    {
        int hossz = min + rand() % (max - min + 1);

        for(int j = 0; j < hossz; j++)
        {
            char c = 33 + rand() % 94;
            printf("%c", c);
        }

        printf("\n");
    }

    return 0;
}