/*************************************************************************
	> File Name: parlin_num.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 15 Apr 2014 09:43:16 PM CST
 ************************************************************************/

#include<iostream>
class Solution{
	public:
		bool isPalindrome(int x)
		{
			int p_x = x ;
			std::cout<<"p_x = "<<p_x <<std::endl;
			int result = 0 ;
			int sign = 1;
			//考虑数据最大取值情况
			if(x < 0 || x > INT_MAX)
			{
				return false ;
			}
			if(x < 10 )
			{
				return true ;
			}
			int base = 1 ;
			//获得数的基数
			while(x /base >= 10)
				base *= 10 ;
			while(x)
			{
				int left = x / base ;
				int right = x % 10  ;
				if(left != right)
				{
					return false ;
				}		
				x -= base * left ;
				//x 每次要去除两位
				base /= 100 ;
				x /= 10 ;

			}
			return true ;
		}
};

int main(int argc , char **argv)
{
	int num ;
	Solution sol ;
	while(std::cin >> num)
	{
		std::cout << "is palindrome " << sol.isPalindrome(num) <<std::endl;
	}
}
