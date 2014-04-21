/*************************************************************************
  > File Name: list.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Wed 16 Apr 2014 10:16:27 PM CST
 ************************************************************************/

#include<iostream>
#include <stdlib.h>
#include <stdio.h>
struct ListNode
{
	int val ;
	ListNode *next ;
	ListNode(int x , ListNode *next):val(x) , next(next){}
};
class Solution{
	public:
		ListNode *removeNthFromEnd(ListNode *head , int n)
		{
			int len = 0 ;
			int j = 1 ;
			ListNode *p = head ;
			ListNode *cur , *pNext , *pCur;
			cur = head ;
			pNext = head ;
			while(p != NULL)
			{

				len++ ;
				p = p->next ;
			}
			std::cout<< "len is "<<len<<std::endl ;
			if(n <= 0 || n > len)
			{
				return NULL ;
			}
			while(j < n && pNext->next != NULL)
			{
				pNext = pNext->next ;
				++j ;
			}
			while(pNext->next != NULL)
			{
				pCur = cur ;
				cur = cur->next ;
				pNext = pNext->next ;
			}
			std::cout<<"cur  "<< cur->val <<std::endl;
			std::cout<<"pCur "<< pCur->val<<std::endl;
			if(len == 1)
			{
				head = NULL  ;
			}
			else
			{

				if(cur->next == NULL)
				{
					pCur->next = NULL ;
				}
				else
				{

					cur->val= cur->next->val ;
					cur->next = cur->next->next ;
				}
			}
			return head ;
		}
};
int main(int argc , char **argv)
{
	Solution sol ;
	//	ListNode e(5 , NULL) ;
	//	ListNode d(4 , &e) ;
	//	ListNode c(3 , &d) ;
	ListNode b(2 , NULL) ;
	ListNode a(1 , &b) ;
	ListNode *p = &a ;
	while(p != NULL)
	{
		std::cout<<p->val <<std::endl ;
		p = p->next ;
	}
	std::cout<<std::endl;
	ListNode *tmp = sol.removeNthFromEnd(&a , 1);
	if(tmp == NULL)
	{
		std::cout<<"no element"<<std::endl; 
	}
	else
	{
		std::cout << tmp->val <<std::endl;

		ListNode *p = &a ;
		while(p != NULL)
		{
			std::cout<<p->val <<std::endl ;
			p = p->next ;
		}
	}
	return 0 ;
}
