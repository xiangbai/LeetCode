/*************************************************************************
	> File Name: median.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Mon 14 Apr 2014 03:13:44 PM CST
 ************************************************************************/

#include<iostream>
class Solution
{
	public:
		double findMedianSortedArrays(int A[] , int m ,int B[] , int n)
		{
			int left_A , right_A ;
			int left_B , right_B ;
			int mid_A , mid_B ;
			left_A = 0 ;
			right_A = m - 1 ;
			left_B = 0 ;
			right_B = n - 1 ;
			while(m != 1 && n != 1)
			{
				mid_A = (left_A + right_A)/2 ;
				mid_B = (left_B + right_B)/2 ;
				if(A[mid_A] > B[mid_B])
				{
					findMedian()
				}
				else if(A[min_A] < B[mid_B])
				{

				}
				else
				{
					return A[min_A] ;
				}

			}

		}
};
int main(int argc , char **argv)
{

}
