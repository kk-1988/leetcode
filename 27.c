#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int fastIndex;
    int slowIndex;

    fastIndex = slowIndex = 0;

    while(fastIndex < numsSize)
    {
        if(nums[fastIndex] == val) {
            fastIndex++;
        }
        else {
            nums[slowIndex] = nums[fastIndex];
            slowIndex++;
            fastIndex++;
        }
    }

    return slowIndex;
}

int main(int argc, char *argv[])
{
    int nums[] = {5,5};
    int newLen;
    newLen = removeElement(nums, sizeof(nums)/sizeof(nums[0]), 0);
    
    printf("new len %d\n", newLen);
    for(int i = 0;i < newLen;i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");    

    return 0;
}