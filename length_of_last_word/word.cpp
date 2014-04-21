/*************************************************************************
	> File Name: word.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Mon 21 Apr 2014 10:10:00 PM CST
 ************************************************************************/

#include<iostream>
#include <string.h>
class Solution{
	public:
		int lengthOfLastWord(const char *s)
		{
			int count = 0 ;
			int ix = strlen(s) - 1 ;
			while(s[ix] == ' ')
			{
				--ix ;
			}
			while(ix >= 0 )
			{
				if(s[ix] != ' ')
				{
					++count ;
				}
				else
				{
					break ;
				}
				--ix ;
			}
			return count ;
		}
};
int main(int argc , char **argv)
{
	char str[] = "hello world";
	Solution sol ;
	std::cout<<sol.lengthOfLastWord(str)<<std::endl;
	return 0 ;
}
