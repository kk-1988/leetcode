#include <stdio.h>

/*
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。
*/
bool isAnagram(char* s, char* t) {
    
    return false;
}

int main(int argc, char *argv[]){
    char *s = "abccdef";
    char *t = "ccdefab";

    bool isTrue = isAnagram(s, t);
    printf("%s\n", isTrue);

    return 0;
}