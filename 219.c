#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct  hashMap {
    int key;
    int index;
    UT_hash_handle hh;
};

bool containsDuplicate(int* nums, int numsSize, int k) {
    int i;
    struct hashMap *set = NULL;
    for (i = 0;i < numsSize;i++) {
        struct hashMap *temp;
        HASH_FIND_INT(set, nums + i, temp);
        if(!temp) {
            temp = calloc(1, sizeof(struct hashMap));
            temp->key = nums[i];
            temp->index = i;
            HASH_ADD_INT(set, key, temp);
        }
        else {
            if((i != temp->index) && (nums[i] == temp->key) && abs(i - temp->index) <= k)
                return true;
            else
            {
                HASH_DEL(set, temp);
                temp->key = nums[i];
                temp->index = i;
                HASH_ADD_INT(set, key, temp);
            }
        }
    }

    return false;
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