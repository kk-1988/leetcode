#include <stdio.h>
#include <stdlib.h>

int reverse(int x){
    int j = 0, y = x;
    long long result,ret;
    int min = 0x80000000;
    int max = 0x7fffffff;

    if(x < 0)
        y = -x;
    
    while(y/10)
    {
        j = y % 10;
        result = result * 10 + j * 10;
        y = y / 10;
    }

    if(y > 0)
        result +=y;

    ret = x < 0 ? -result:result;
    
    return (ret > max || ret < min) ? 0:ret;
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