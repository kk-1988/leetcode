#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {
    if(strlen(s) % 2 != 0)
        return false;

    char stack[10000] = { 0 };
    int stack_top = 0;
    int j = 0;

    for(int i = 0;i < strlen(s);i++)
    {
        if(s[i] == '(' || s[i] == '{'  || s[i] == '[' ) {
            stack[j] = s[i];
            stack_top = j;
            j++;
        }
        else {
            /* 
            * 1. 如果栈顶不是对应的右括号，则返回错误，否则，继续遍历
            * 2. 最后看堆栈是否为空，为空的话，则返回true，不然，返回false
            * 3. 对应的(),{},[],右括号比左括号大1或者2
            */
            if((stack_top >= 0) && ((s[i] - stack[stack_top] == 1) || (s[i] - stack[stack_top] == 2))) {
                    stack_top--;
                    j--;
                    continue;
            } else {
                return false;
            }
        }
        
    }

    if(stack_top != -1)
        return false;

    return true;
}

int main(int argc, char *argv[])
{
    char s[] = "{}";
    isValid(s);
    return 0;
}