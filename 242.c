#include <stdio.h>

/*
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。
*/
bool isAnagram(char* s, char* t) {
     unsigned short hashMapS[32] = { 0 };
     unsigned short hashMapT[32] = { 0 };
     int i;
     if(strlen(s) != strlen(t))
        return false;

     for(i = 0;i < strlen(s);i++) {
        hashMapS[s[i] - 'a']++;
     }    

     for(i = 0;i < strlen(t); i++) {
        hashMapT[t[i] - 'a']++;
     }

     
     for(i = 0;i < sizeof(hashMapS) / sizeof(hashMapS[0]);i++) {
            if(hashMapS[i] != hashMapT[i])
                return false;
     }

    return true;
}

int main(int argc, char *argv[]){
    char *s = "abccdef";
    char *t = "ccdefab";

    bool isTrue = isAnagram(s, t);
    printf("%s\n", isTrue);

    return 0;
}