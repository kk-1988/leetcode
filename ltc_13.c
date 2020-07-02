#include <stdio.h>
/*
* I             1
* V             5
* X             10
* L             50
* C             100
* D             500
* M             1000
*/
int roman_to_int(char * s)
{
	char min_base_char = 'I';
	unsigned short arr_value[6] = {1,5,10,50,100,500,1000};
	char *p = s;
	
    while(p)
	{
		switch(*p)
		{
			case 'I':
			break;
			
			case 'V':
			break;
			
			case 'X':
			break;
			
			case 'L':
			break;
			
			case 'C':
			break;
			
			case 'D':
			break;
			
			case 'M':
			break;
		}
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