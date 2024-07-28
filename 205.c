/*
给定两个字符串 s 和 t ，判断它们是否是同构的。

如果 s 中的字符可以按某种映射关系替换得到 t ，那么这两个字符串是同构的。

每个出现的字符都应当映射到另一个字符，同时不改变字符的顺序。不同字符不能映射到同一个字符上，相同字符只能映射到同一个字符上，字符可以映射到自己本身。

提示：
1 <= s.length <= 5 * 10的4次方
t.length == s.length
s 和 t 由任意有效的 ASCII 字符组成
*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    char hashMapCount[128] = { 0 };
    char hashMapLinked[128] = { 0 };
    int i;

    for(i = 0;i < strlen(s);i++) {
        hashMapCount[s[i]]++;
        if(hashMapCount[s[i]] == 1) {
            hashMapLinked[s[i]] = t[i];   //s的位置对应的map值
        } else {
            if(hashMapLinked[s[i]] != t[i])
                return false;
        }
    }

    memset(hashMapCount, 0, sizeof(hashMapCount));
    memset(hashMapLinked, 0, sizeof(hashMapLinked));
    for(i = 0;i < strlen(t);i++) {
        hashMapCount[t[i]]++;
        if(hashMapCount[t[i]] == 1) {
            hashMapLinked[t[i]] = s[i];   //s的位置对应的map值
        } else {
            if(hashMapLinked[t[i]] != s[i])
                return false;
        }
    }

    return true;   
}

int main(int argc, char *argv[])
{
    char *s = "egg";
    char *t = "add";
    bool ret = true;
    
    ret = isIsomorphic(s, t);
    if(ret)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}