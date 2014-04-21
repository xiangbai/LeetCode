/*************************************************************************
	> File Name: duplicate.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 19 Apr 2014 10:00:24 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution{
	public:
		int removeDuplicates(int A[] , int n)
		{
			int i , j = 0;
			int  flag ;
			int len = 0 ;
			if(n == 0)
			{
				return 0 ;
			}
			flag = A[0] ;
			A[j++] = flag ;
			len++ ;
			for(i = 1 ; i < n ; ++i)
			{
				if(flag != A[i])
				{
					flag = A[i] ;
					A[j++] = flag ;
					len ++;
				}
			}
			return len ;
		}
};

int main(int argc , char **argv)
{
	int A[3] = {1,1,2} ;
	Solution sol ;
	int num = sol.removeDuplicates(A , 3) ;
	for(int i = 0 ; i < num ; ++i)
	{
		std::cout<<A[i] <<" " ;
	}
	std::cout<<std::endl;
	return 0 ;
}
