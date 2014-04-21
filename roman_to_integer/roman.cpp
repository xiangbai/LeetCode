/*************************************************************************
	> File Name: roman.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 15 Apr 2014 10:47:36 PM CST
 ************************************************************************/

#include<iostream>
class Solution{
	private:
		int get_int(char c)
		{
			int data ;
			switch(c)
			{
				case 'I' :
					data =  1 ;
					break ;
				case 'V' :

					data = 5 ;
					break;
				case 'X' :

					data = 10 ;
					break;
				case 'L' :

					data = 50 ;
					break ;
				case 'C' :

					data = 100 ;
					break ;
				case 'D' :

					data = 500 ;
					break ;
				case 'M' :

					data = 1000 ;
					break ;
				default :
					data = 0 ;
					break ;
			}
			return data ;
		}
	public:
		int romanToInt(std::string s)
		{
			int  cur ;
			int  pre ;
			int sum = 0 ;
			std::size_t i ;
			for(i = 0 ; i < s.length() ; ++i)
			{
				cur = get_int(s[i]) ;
				if(i == 0)
				{					
					sum += cur ;
					continue ;
				}
				pre = get_int(s[i-1]);
				if(pre >= cur)
				{
					sum += cur ;
				}
				else 
				{
					sum = sum - 2 * pre + cur ;
				}
				if(i > 2)
				{
					if(s[i - 2] == s[i - 1] && s[i - 1] == s[i])
					{
						std::cout <<"less three same" << std::endl;
						return -1 ;
					}
				}

			}
			return sum ;
		}
};
int main(int argc , char **argv)
{
	std::string s ;
	Solution sol ;
	while(std::cin >> s)
	{
		std::cout <<"Roman integer  "<< s << " to integer "<<sol.romanToInt(s) <<std::endl;
	}
}
