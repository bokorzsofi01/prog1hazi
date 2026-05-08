#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n,const int tomb[])
{
    int index = rand() % n;
    return tomb[index];
}

int main()
{
    srand(time(NULL));

    int tomb[] = {1,2,3,4,5};

    int valasztott = choice(5, tomb);

    printf("%d\n",valasztott);

    return 0;
}