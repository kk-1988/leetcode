#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize / 2;
    int i;

    if(target <= nums[end])
    {
        for(i = start;i <= end; i++)
        {
            if(nums[i] == target)
                return i;
        }
    } else {
        start = end + 1;
        for(i = start;i < numsSize; i++)
        {
            if(nums[i] == target)
                return i;
        }
    }

    return -1;
}

int main(int argc, char *argv[])
{
    int nums[] = {1,2,5,8,9,10,12,60};
    search(nums, sizeof(nums) / sizeof(nums[0], 60));
    return 0;
}