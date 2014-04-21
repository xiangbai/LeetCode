/*************************************************************************
	> File Name: valid_bracket.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Thu 17 Apr 2014 05:05:51 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
class Solution{
	public:
		bool isValid(std::string s)
		{
			int brack[128] ;
			int top = -1 ;
			bool is_V = true ;
			std::string::size_type index = 0 ;
			while(index != s.size())
			{
				switch(s[index])
				{
					case '(' :
						brack[++top] = '(' ;
						break ;
					case '{' :
						brack[++top] = '{' ;
						break ;
					case '[' :
						brack[++top] = '[' ;
						break ;
					case ')' :
						if(brack[top] == '(')
						{
							--top ;
						}
						else
						{
							is_V = false ;
						}
						break; 
					case '}' :
						if(brack[top] == '{')
						{
							--top ;
						}
						else
						{
							is_V = false ;
						}
						break ;
					case ']' :
						if(brack[top] == '[')
						{
							--top ;
						}
						else
						{
							is_V= false ;
						}
						break ;
					default :
						break ;
				}
				++index ;
			}
			if(top != -1)
			{
				is_V = false ;
			}
			return is_V ;
		}
};
int main(int argc , char **argv)
{
	Solution sol ;
	std::string s ;
	while(std::cin >> s)
	{
		std::cout<<sol.isValid(s)<<std::endl;
	}
	return 0 ;
}
