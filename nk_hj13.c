#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//double point
int main(int argc, char *argv[])
{
    char str[1001] = {0};
    char res[1001] = {0};
    int i, k = 0;
    int start,end;

    scanf("%[^\n]", str);
    //printf("str %s\n", str);

    int str_len = strlen(str);
    start = end = str_len - 1;

    //首先找到start和end的差值
    while(start)
    {
        for(i = start;i >=0;i--)
        {
            if(str[i] == ' ')
            {
                memcpy(res + k, str + start + 1, end - start);
                k += (end - start);
                res[k++] = ' ';
                start--;
                end = start;
                break;
            }
            else
            {
                start--;
            }
        }

        //如果start没有变化，则说明没有找到空格，则直接拷贝过去
        if(end == str_len - 1)
        {
            memcpy(res, str, str_len);
            break;
        }
        else if(start == 0)
        {
            memcpy(res + k, str + start, 1);
        }
    }

    printf("%s\n", res);
    return 0;
}
