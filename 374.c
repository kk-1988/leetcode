#include <stdio.h>

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	int result = 0;
    int left = 1;
    int right = n;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
	    result = guess(mid);
        if(result == 0)
            return mid;
        else if(result == -1)
            right = mid - 1;
        else if(result == 1)
            left = mid + 1;
    }

    return 0;
}

//猜数字大小
int main(int argc, char *argv[])
{
    guessNumber();
    return 0;
}