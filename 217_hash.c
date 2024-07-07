#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct  hashMap {
    int key;
    UT_hash_handle hh;
};

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    struct hashMap *set = NULL;
    for (i = 0;i < numsSize;i++) {
        struct hashMap *temp;
        HASH_FIND_INT(set, nums + i, temp);
        if(!temp) {
            temp = calloc(1, sizeof(struct hashMap));
            temp->key = nums[i];
            HASH_ADD_INT(set, key, temp);
        }
        else 
            return true;
    }

    return false;;
}

int main(int argc, char *argv)
{
    int nums[] = {1,2,3,5,1,7,2,-1};
    containsDuplicate(nums, sizeof(nums) / sizeof(nums[0]));

    for(int i = 0;i < sizeof(nums) / sizeof(nums[0]);i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
}