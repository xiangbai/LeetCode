/*************************************************************************
	> File Name: position.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 19 Apr 2014 10:30:02 AM CST
 ************************************************************************/

#include<iostream>
class Solution
{
	public:
		int searchInsert(int A[] , int n , int target)
		{
			int i ;
			for(i = 0  ; i < n ; i++)
			{
				if(target <=  A[i])
				{
					return i ;
				}
			}
			if(i == n)
			{
				return i ;
			}
		}
};
int main(int argc , char **argv)
{
	int A[4] = {1 ,3 , 5 , 6} ;
	Solution sol ;
	std::cout<<sol.searchInsert(A , 4 , 0) <<std::endl;
	return 0 ;
}
