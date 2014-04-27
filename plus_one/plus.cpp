/*************************************************************************
  > File Name: plus.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Wed 23 Apr 2014 08:42:22 AM CST
 ************************************************************************/

#include<iostream>
#include <vector>
class Solution{
	//重点思路是使数据反转，以免数据相加溢出
	private:
		void reverse(std::vector<int> ::iterator begin , std::vector<int>::iterator end)
		{
			int temp ;
			end = end - 1 ;
			//实现数据的加换
			while(begin <  end)
			{
				temp = *begin ;
				*begin = *end ; 
				*end = temp ;
				++begin ;
				--end ;
			}
		}
	public:
		std::vector<int> plusOne(std::vector<int> &digits)
		{
			std::vector<int> ret ;
			int overflow = 1 ;
			reverse(digits.begin() , digits.end()) ; //逆序数据
			for(std::vector<int>::iterator iter = digits.begin() ; iter != digits.end() ; ++iter)
			{
				*iter += overflow ;
				overflow = *iter / 10 ;  //进位值
				*iter %= 10 ;            //加1值
				ret.push_back(*iter) ;
			}
			//最高位产生进位的情况，要进1操作
			if(overflow == 1)
			{
				ret.push_back(1) ;
			}
			reverse(ret.begin() , ret.end()) ;
			return ret ;
		}
};
int main(int argc , char **argv)
{
	int val ;
	std::vector<int> digits ;
	Solution sol ;
	while(std::cin >> val)
	{
		digits.push_back(val) ;
	}
	digits = sol.plusOne(digits) ;

	for(std::vector<int>::iterator iter = digits.begin() ; iter != digits.end() ; ++iter)
	{
		std::cout<<*iter ;
	}
	std::cout<<std::endl;
	return 0 ;
}
