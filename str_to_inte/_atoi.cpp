/*************************************************************************
	> File Name: _atoi.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Mon 14 Apr 2014 10:56:13 PM CST
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <limit.h>
class Solution{
	public:
	int atoi(const char *str)
	{
		assert(str != NULL);
		int i = 0 ;
		int sign ;
		int result = 0 ;
		int digit = 0 ;
		while(isspace(str[i]))
			++i ;
		sign = str[i] == '-' ? -1 : 1 ;
		if(str[i] == '-' || str[i] == '+')
		{
			++i ;
		}
		//import : conside the range of max int and min int 
		while(isdigit(str[i]))
		{
			digit = str[i] - '0' ;
			if(INT_MAX / 10 >= result)
				result *= 10 ;
			else
				return sign == -1 ? INT_MIN : INT_MAX ;
			if(INT_MAX - digit >= result)
				result += digit ;
			else
				return sign == -1 ? INT_MIN : INT_MAX ;
			++i ;
		}
		if(sign == -1)
		{
			result *= -1 ;
		}
		return result ;
	}
};
int main(int argc , char *argv[])
{
	char str[256] ;
	Solution sol ;
	while(bzero(str , 256) , fgets(str , 256 , stdin) != NULL)
	{
		std::cout<<str<<std::endl ;
		std::cout<<sol.atoi(str)<<std::endl;
	}
	return 0 ;
}
