/*************************************************************************
	> File Name: path.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Mon 21 Apr 2014 10:45:50 PM CST
 ************************************************************************/

#include<iostream>
#include <vector>
class Solution{
	public:
		int uniquePaths(int m , int n){
			std::vector< std::vector<int> >f(m , std::vector<int>(n)) ;
			for(int i = 0 ; i < n ; ++i)
			{
				f[0][i] = 1 ;
			}
			for(int i = 0  ; i < m ; ++i)
			{
				f[i][0] = 1 ;
			}
			for(int i = 1 ; i < m ; ++i)
			{
				for(int j = 1 ; j < n ; ++j)
				{
					f[i][j] = f[i-1][j] + f[i][j-1] ;
				}
			}
			return f[m-1][n-1] ;
		}
};

int main(int argc , char **argv)
{
	Solution sol ;
	std::cout<<sol.uniquePaths(3 , 7)<<std::endl ;
	return 0 ;
}
