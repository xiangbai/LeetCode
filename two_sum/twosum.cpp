/*************************************************************************
  > File Name: twosum.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Sun 13 Apr 2014 08:31:36 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<algorithm>
struct Node   
{
	int val ;
	int index ;
	Node(){}
	Node(int x , int idx):val(x) , index(idx){}
};
class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> &numbers , int target);
};

bool compare(const Node &lhs , const Node &rhs)
{
	return lhs.val < rhs.val ;
}
std::vector<int> Solution::twoSum(std::vector<int> &numbers , int target)
{

	std::vector<Node> node ;
	std::vector<Node>::size_type iy = 0 ;
	for(std::vector<int>::size_type ix = 0 ; ix != numbers.size() ; ++ix)
	{
		Node n(numbers[ix] , ix+1);
		node.push_back(n);
	}
	sort(node.begin() , node.end() , compare); //sort the numbers
	for(iy = 0 ; iy != node.size() ; ++iy)
	{
		std::cout<<node[iy].val<<"  "<<node[iy].index <<std::endl ;
	}
	int i , j ;
	i = 0 ;
	j = numbers.size() -1 ;
	while(i < j)
	{
		int sum = node[i].val + node[j].val ;
		if(sum == target)
		{
			std::vector<int> ret ;
			int minindex , maxindex ;
			minindex = node[i].index > node[j].index ? node[j].index :node[i].index ;
			maxindex = node[i].index > node[j].index ? node[i].index :node[j].index ;
			ret.push_back(minindex);
			ret.push_back(maxindex);
			std::cout<<"index1 = "<<ret[0]<<", "<<"index2 = "<<ret[1]<<std::endl;
			return ret ;
		}
		else if (sum < target)
		{
			++i ;
		}
		else if(sum > target)
		{
			--j ;
		}
	}
}

int main()
{
	int val ;
	std::vector<int> numbers ;
	Solution sol ;
	int index1 , index2 ;
	while(std::cin>>val)
	{
		numbers.push_back(val);
	}
	sol.twoSum(numbers , 9);
	return 0 ;
}
