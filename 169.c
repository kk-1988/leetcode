#include <stdio.h>

int cmp_int(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int majorityElement(int* nums, int numsSize) {
   int temp;
   int cnt;
   int i;
   
    qsort(nums, numsSize, sizeof(int), cmp_int);

    temp = nums[0];
    cnt = 0; 
    for(i = 0;i < numsSize; i++) {
        if(nums[i] == temp) {
            cnt++;
            if(cnt > (numsSize / 2))
                break;
        } else {
            temp = nums[i];
            cnt = 1;
        }
    }

    return temp;
}

int main(int argc, char *argv[])
{
    // int nums[] = {};
    // majorElement();
    return 0;
}