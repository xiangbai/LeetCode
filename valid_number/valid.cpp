/*************************************************************************
	> File Name: valid.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 22 Apr 2014 09:24:17 PM CST
 ************************************************************************/

#include<iostream>
#include <stdio.h>
class Solution{
	public:
		bool isNumber(const char *s){
			int i = 0 ;
			bool flag = true ;
			if(s == NULL)
			{
				return false ;
			}
			while(s[i] != '\0')
			{
				
				++i ;
			}
			return flag ;
		}
};
int main(int argc , char **argv)
{
	char p[1024] ;
	Solution sol ; 
	while(fgets(p , 1024 , stdin))
	{
		std::cout<<sol.isNumber(p)<<std::endl ;
	}
	return 0 ;
}
