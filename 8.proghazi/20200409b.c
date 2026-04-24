#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input)
{
    if (strlen(input) == 0)
    {
        return 0;
    }

    if (!(isalpha(input[0]) || input[0] == '_'))
    {
        return 0;
    }

    for (int i = 1; input[i] != '\0'; i++)
    {
        if (!(isalnum(input[i]) || input[i] == '_'))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char szoveg[200];

    printf("Adj meg sztringeket '*' vegjelig!\n\n");

    do
    {
        printf("Input: ");
        fgets(szoveg, 200, stdin);
        szoveg[strcspn(szoveg, "\n")] = '\0';

        if (strcmp(szoveg, "*") != 0)
        {
            if (is_valid_c_identifier(szoveg))
            {
                printf("YES\n\n");
            }
            else
            {
                printf("NO\n\n");
            }
        }

    } while (strcmp(szoveg, "*") != 0);

    return 0;
}