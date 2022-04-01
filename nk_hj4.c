#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char str[101] = {0};
    int str_len;
    char *p = str;
    int i,j;

    while(scanf("%s",str) != EOF)
    {
        str_len = strlen(str);

        for(i =0;i < str_len; i++)
        {
            if(i > 0 && (i%8 == 0))
            {
                printf("\n");
                printf("%c",p[i]);
            }
            else
            {
                printf("%c", p[i]);
            }
        }

        if(i % 8 == 0)
        {
            printf("\n");
            continue;
        }

        for(j = i % 8; j < 8; j++)
        {
            putchar('0');
        }
        printf("\n");

        memset(str, 0, sizeof(str));
    }

    return 0;
}
