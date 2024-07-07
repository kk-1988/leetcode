#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *cmp(int *a, int *b)
{
    return *a - *b;
}

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    qsort(nums, numsSize, sizeof(int), cmp);

    //judge
    for(i = 0;i < numsSize - 1; i++) {
        if(nums[i] == nums[i + 1])
            return true;
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