#include <stdio.h>
/*
* I             1
* V             5
* X             10
* L             50
* C             100
* D             500
* M             1000
* "MCMXCIV" == 1994
*
*/
int roman_to_int(char * s)
{
	char arr_value[6] = {'I','V','X','L','C','D','M'};
	char min_base_char = 0;
	char *p = s;
	int i;
	
    while(p)
	{
		for(i = 0;i < 6;i++)
		{
			if(*p == arr_value[i])
			{
				/* 根据索引排序 */
				if(i >= min_base_char)
				{
					min_base_char = i;
				}
				else
				{
					/* 如果小于索引值 */
					
				}
			}
		}
		
		p++;
	}
}

/*
* I             1
* V             5
* X             10
* L             50
* C             100
* D             500
* M             1000
*/
int main(int argc,char *argv[])
{
	if(argc < 2)
	{
		printf("argc < 2.\r\n");
		return 1;
	}
	
	roman_to_int(argv[1]);
	return 0;
}