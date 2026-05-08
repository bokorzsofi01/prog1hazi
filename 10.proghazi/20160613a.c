#include <stdio.h>

int main()
{
    for(int a = 1; a <= 40; a++)
    {
        if(996300 % a != 0)
        {
            continue;
        }

        for(int b = a + 1; b <= 41; b++)
        {
            if((996300 / a) % b != 0)
            {
                continue;
            }

            for(int c = b + 1; c <= 42; c++)
            {
                if((996300 / (a * b)) % c != 0)
                {
                    continue;
                }

                for(int d = c + 1; d <= 43; d++)
                {
                    if((996300 / (a * b * c)) % d != 0)
                    {
                        continue;
                    }

                    for(int e = d + 1; e <= 44; e++)
                    {
                        if((996300 / (a * b * c * d)) % e != 0)
                        {
                            continue;
                        }

                        for(int f = e + 1; f <= 45; f++)
                        {
                            int osszeg = a + b + c + d + e + f;
                            int szorzat = a * b * c * d * e * f;

                            if(osszeg == 90 && szorzat == 996300)
                            {
                                printf("%d %d %d %d %d %d\n",
                                       a, b, c, d, e, f);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}