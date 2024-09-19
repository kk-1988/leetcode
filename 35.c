#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while(left <= right) {
       int mid = left + (right - left) / 2; 
        if(target == nums[mid]) 
            return mid;
        else if(target < nums[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }

        if(left > right)
            return left;
    }

    return -1;
}

int main(int argc, char *argv[])
{


    return 0;
}