#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[])
{
    for(int i = n - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);

        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main()
{
    srand(time(NULL));

    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8};

    shuffle(8, tomb);

    for(int i = 0; i < 8; i++)
    {
        printf("%d ", tomb[i]);
    }

    printf("\n");

    return 0;
}