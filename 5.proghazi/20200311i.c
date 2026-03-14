/*
Fizz Buzz
Ez egy klasszikus programozási feladat, ami állásinterjúkon is gyakran előjön.
Írj egy programot, ami 1-től 100-ig kiírja a számokat, figyelembe véve a következő szabályokat:
ha a szám osztható 3-mal, akkor a szám helyett azt írjuk ki, hogy "fizz"
ha a szám osztható 5-tel, akkor a szám helyett azt írjuk ki, hogy "buzz"
ha a szám 3-mal és 5-tel is osztható, akkor a szám helyett azt írjuk ki, hogy "fizzbuzz"
(alapesetben csak maga a szám legyen kiírva)
Példa:
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
16
...
*/

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}