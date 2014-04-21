/*************************************************************************
  > File Name: notation.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Tue 08 Apr 2014 10:03:07 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<cctype>
class Solution
{
	public:
		int evalRPN(std::vector<std::string> &tokens)
		{
			std::vector<std::string>::temp ;
			std::vector<std::string>::size_type ix = 0 ;
			std::vector<std::string>::iterator iter = tokens.begin();
			std::string ope1 , ope2 ;
			while(iter != tokens.end())
			{
				temp[ix] = *iter ;
				++ix ;
				++iter ;
			}
			tokens.clear();
			iter = temp.begin();
			while(iter != temp.end())
			{
				
			}

		}
};
int main(int argc , char *argv[])
{
	std::vector<std::string> tokens ;
	std::string token ;
	Solution myS ;
	while(1)
	{
		while(std::cin>>token)
		{
			tokens.push_back();
		}
		myS.evalRPN(tokens);
	}
}
