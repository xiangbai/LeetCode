/*************************************************************************
	> File Name: integer.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Mon 14 Apr 2014 10:38:47 PM CST
 ************************************************************************/

#include <iostream>
class Solution{
	public:
		int reverse(int x)
		{
			int sign ;
			int rev_x = 0 ;
			if((sign = x) < 0)
			{
				sign = -1 ;
				x = -x ;
			}
			do
			{
				rev_x = 10 * rev_x + x % 10 ;
			}while(x = x / 10);	
			if(sign < 0)
			{
				rev_x *= sign ;
			}
			return rev_x ;
		}
};

int main(int argc , char **argv)
{
	int x ;
	Solution sol ;
	while(std::cin>>x)
	{
		std::cout<<"x = "<<x <<", return "<<sol.reverse(x)<<std::endl;;
	}
}
