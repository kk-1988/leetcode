//x的平方根
#include <stdio.h>

int mySqrt(int x) {
    int left = 0,right = x;
    int index = -1;

    while(left <= right)
    {
        unsigned long mid = left + (right - left) / 2;
        if(mid * mid > x) {
            right = mid - 1;
        }
        else {
            index = mid;
            left = mid + 1;
        }
    }

    return index;
}

int main(int argc, char *argv[])
{
    mySqrt(8);
    return 0;
}