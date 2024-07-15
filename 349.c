#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hashMap1[1001] = { 0 };
    int hashMap2[1001] = { 0 }; 
    int *result = (int *)calloc(1, 1000 * sizeof(int));
    int i ,n = 0;

    for(i = 0;i < nums1Size;i++) {
        hashMap1[nums1[i]]++;
    }

    for(i = 0;i < nums2Size;i++) {
        hashMap2[nums2[i]]++;
    }

    for(i = 0;i < 1001;i++)
    {
        if(hashMap1[i] >=1 && hashMap2[i] >= 1) {
            result[n++] = i;
        }
    }

    *returnSize = n;
    return result;
}

int main(int argc, char *argv[]) 
{
    int nums1[10] = {1,2,3,4,5,6,9,1,0,20};
    int nums2[7] = {90,5,1,2,90,20,1000};
    int resultLen = 0;
    int *result = NULL;

    result = intersection(nums1, sizeof(nums1) / sizeof(nums1[0]), nums2, sizeof(nums2) / sizeof(nums2[0]), &resultLen);
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