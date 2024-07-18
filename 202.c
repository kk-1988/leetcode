#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  hashMap {
    int key;
    UT_hash_handle hh;
};

bool isHappy(int n) {
    int temp = n;
    int sum = 0;
    int hashMap[10];
    int i, j;
    struct hashMap *set = NULL;

    while(1) {
        memset(hashMap, 0, sizeof(hashMap));
        sum = 0;

        do {
            hashMap[temp % 10]++; 
            temp = temp / 10;
        }while(temp);

        for(i = 0;i < sizeof(hashMap) / sizeof(hashMap[0]); i++) {
            for(j = 0; j < hashMap[i];j++) {
               sum += i * i;
            }
        }

        if(sum == 1)
            return true;
        else if(sum < 1 || sum > INT32_MAX)
            return false;
        else {
                struct hashMap *hash_temp;
                HASH_FIND_INT(set, &sum, hash_temp);
                if(!hash_temp)
                {
                    hash_temp = calloc(1, sizeof(struct hashMap));
                    hash_temp->key = sum;
                    HASH_ADD_INT(set, key, hash_temp);
                    temp = sum;
                }
                else
                    return false;
        }
    }

    return false;
}

int main(int argc,char *argv[])
{
    int n;
    bool ret = false;
    printf("please input a inter of n: ");
    scanf("%d", &n);
    //ret = isHappy(n);
    if(ret == true)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}