#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char str[101] = {0};
    char res[101] = {0};
    char hash_table[10][101] = {0};
    //inser string
    memcpy(hash_table[0],  "0", 1);
    memcpy(hash_table[1], "1", 1);
    memcpy(hash_table[2],  "abc", 3);
    memcpy(hash_table[3],  "def", 3);
    memcpy(hash_table[4],  "ghi", 3);
    memcpy(hash_table[5],  "jkl", 3);
    memcpy(hash_table[6],  "mno", 3);
    memcpy(hash_table[7],  "pqrs", 4);
    memcpy(hash_table[8],  "tuv", 3);
    memcpy(hash_table[9],  "wxyz", 4);

    int i = 0, j,k;
    char *p = str;
    scanf("%s", str);

    while(*p)
    {
        if(*p >= 'A' && *p <= 'Z')
        {
            if(*p == 'Z')
                res[i] = 'a';
            else
                res[i] = *p + 33;

            i++;
        }
        else
        {
           if(*p >= 'a' && *p <= 'z')
           {
               for(k = 0;k < 10;k++)
               {
                    for(j = 0;j < strlen(hash_table[k]);j++)
                    {
                        if(*p == hash_table[k][j])
                        {
                            res[i] = k + '0';
                        }
                    }
               }
           }
           else
           {
               //printf("*p = %c\n", *p);
               res[i] = *p;
           }

            i++;
        }
        p++;
    }

    printf("%s",res);

    return 0;
}
