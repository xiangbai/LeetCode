/*************************************************************************
	> File Name: count.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Mon 21 Apr 2014 09:42:47 PM CST
 ************************************************************************/

#include<iostream>
#include <sstream>
#include <string>
class Solution
{
	private:
		std::string count(std::string say)
		{
			std::size_t ix ;
			int count = 0 ;
			char flag = say[0] ;
			std::stringstream says ;  //字符串流
			for(ix = 0 ;ix <= say.size() ; ++ix)  //用<=是为了进入else循环中
			{
				if(flag == say[ix])
				{
					count++ ;
				}
				else
				{
					says << count<<flag;     //输入流
					flag = say[ix] ;
					count = 1 ;
				}
			}
			
			return says.str() ;       //返回流中的数据
		}
	public:
		std::string countAndSay(int n)
		{
			std::string say = "1";
			for(std::size_t ix = 1 ; ix < n ; ix ++)
			{
				say = count(say) ;
			}
			return say ;
		}
};

int main(int argc , char **argv)
{
	Solution sol ;
	int n ;
	std::cin >> n ;
	std::cout<<sol.countAndSay(n)<<std::endl;
	return 0 ;
}
