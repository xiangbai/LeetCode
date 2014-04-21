/*************************************************************************
	> File Name: element.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 19 Apr 2014 10:16:18 AM CST
 ************************************************************************/

#include<iostream>
class Solution{
	public:
		int removeElement(int A[] , int n , int elem)
		{
			int j = 0 ;
			for(int i = 0  ; i < n ; i++)
			{
				if(A[i] != elem)
				{
					A[j++] = A[i];
				}
			}
			return j ;
		}
};
int main(int argc , char **argv)
{
	int A[10] = {1,1,1,1,1,2,3,4,5,6};
	Solution sol ;
	int n = sol.removeElement(A , 10  , 1) ;
	for(int i = 0 ; i < n ; ++i)
	{
		std::cout<<A[i] << "  ";
	}
	std::cout<<std::endl;
}
