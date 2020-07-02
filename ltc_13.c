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
	char arr_char[7] = {'I','V','X','L','C','D','M'};
	unsigned short arr_value[7] = {1, 5, 10, 50, 100, 500, 1000};
	char min_base_idx = sizeof(arr_value);
	char *p = s;
	int i;
	unsigned short sum = 0;
	
    while(p)
	{
		for(i = 0;i < sizeof(arr_char);i++)
		{
			if(*p == arr_char[i])
			{
				if(i < min_base_idx)
				{
					min_base_idx = i;
					sum += arr_value[i];
				}
				else
				{
					/* 如果大于,则把min_base_idx索引的值变成负值 */
					
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