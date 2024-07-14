#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hashMap1[1001] = { 0 };
    int hashMap2[1001] = { 0 }; 
    int *result = (int *)calloc(1, 1000 * sizeof(int));
    int i ,j, n = 0, times = 0;

    for(i = 0;i < nums1Size;i++) {
        hashMap1[nums1[i]]++;
    }

    for(i = 0;i < nums2Size;i++) {
        hashMap2[nums2[i]]++;
    }

    for(i = 0;i < 1001;i++)
    {
        if(hashMap1[i] >=1 && hashMap2[i] >= 1) {
            times = hashMap1[i] >= hashMap2[i] ? hashMap2[i] : hashMap1[i];

            for(j = 0;j < times;j++) {
                result[n++] = i;
            }
        }
    }

    *returnSize = n;
    return result;
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