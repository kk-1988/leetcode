#include <stdio.h>
#include <stdlib.h>


#if 0
int reverse(int x){
    long result = 0, y = x;
    int min = 0x80000000;
    int max = 0x7fffffff;

    while(y)
    {
        result = result * 10 + y %10;
        y = y / 10;
    }
    
    return (result > max || result < min) ? 0:result;
}

#else
#include <limits.h>
int reverse(int x){
    int rev = 0;
    printf("max = %d\r\n",INT_MAX);
    printf("min = %d\r\n",INT_MIN);
    
    while (x != 0) {
        int pop = x % 10;
        printf("pop = %d ",pop);
        x /= 10;
        printf("x = %d ",x);
        printf("rev = %d\r\n", rev);
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        rev = rev * 10 + pop; 
    }
    return rev;
}

#endif

int main(int argc,char *argv[])
{
    int ret;

    if(argc < 2)
    {
        printf("please input 2 param\r\n");
        return -1;
    }
    
	ret = reverse(atoi(argv[1]));

    printf("ret = %d\r\n",ret);
	return 0;
}