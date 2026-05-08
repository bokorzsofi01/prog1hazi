#include <stdio.h>

int main()
{
    int cellak[600];

    for(int i = 0; i < 600; i++)
    {
        cellak[i] = 0;
    }

    for(int lepes = 1; lepes <= 600; lepes++)
    {
        for(int i = lepes - 1; i < 600; i = i + lepes)
        {
            if(cellak[i] == 0)
            {
                cellak[i] = 1;
            }
            else
            {
                cellak[i] = 0;
            }
        }
    }

    for(int i = 0; i < 600; i++)
    {
        if(cellak[i] == 1)
        {
            printf("%d", i + 1);

            if(i + 1 < 576)
            {
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}