#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *result = NULL;



}

int main(int argc, char *argv[])
{
    int nums1[] = {1,2,4,5,9,10,2,8};
    int nums2[] = {5,6,10,20};
    int resultLen = 0;
    int *result = NULL;
    result = intersect(nums1,sizeof(nums1) / sizeof(nums1[0]), nums2, sizeof(nums) / sizeof(nums2[0]), &resultLen);
    if(result)
    {
        for(int i = 0;i < resultLen;i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        
        free(result);
        result = NULL;
    }
    return 0;
}