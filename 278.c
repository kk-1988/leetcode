#include <stdio.h>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int left = 1, right = n;
    int mid = 0;
    while(left < right){
        mid = left + (right - left) / 2;
        if(false == isBadVersion(mid)) {
            //ok
            left = mid + 1;
        } else {
            //bad
            right = mid;
        }
    }

    if(isBadVersion(mid) == true)
        return mid;

    if(isBadVersion(left) == true)
        return left;

    return -1;
}

int main(int argc, char *argv[])
{

    return 0;
}