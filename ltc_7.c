#include <stdio.h>
#include <stdlib.h>

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