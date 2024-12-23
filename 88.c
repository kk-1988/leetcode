#include <stdio.h>
#include <string.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i,j;
	int temp;

	memcpy(nums1 + m, nums2, n * sizeof(int));

	for(i = 0;i < nums1Size - 1; i++) {
		for(j = 0; j < nums1Size - i - 1; j++) {
			if(nums1[j] > nums1[j + 1])
			{
				temp = nums1[j];
				nums1[j] = nums1[j + 1];
				nums1[j + 1] = temp;
			}
		}
	}

    return;
}

int main(int argc, char *argv[])
{
    int nums1[] = {1,2,7,0,0,0};
    int nums2[] = {2,3,4};
    merge(nums1, sizeof(nums1) / sizeof(nums1[0]), 3, nums2, sizeof(nums2) / sizeof(nums2[0]), sizeof(nums2) / sizeof(nums2[0]));

    for(int i = 0;i < sizeof(nums1) / sizeof(nums1[0]); i++){
    	printf("%d ", nums1[i]);
    }

    printf("\n");
    return 0;
}