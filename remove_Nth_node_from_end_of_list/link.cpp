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
			pCur = NULL ;
			while(j < n && pNext != NULL)
			{

				pNext = pNext->next ;
				j++ ;
			}
			if(pNext == NULL)
			{
				return NULL ;
			}
			std::cout<<"pNext is "<< pNext->val << std::endl;
			while(pNext->next != NULL){
				pCur = cur ;
				cur = cur->next ;
				pNext = pNext->next ;
			}
			std::cout<<"cur is "<<cur->val<<std::endl;
			if(pCur == NULL)
			{

				head = cur->next ;
				
			}
			else
			{				

				pCur->next = cur->next ;
				free(cur);
			}
			return head ;
		}
};
int main(int argc , char **argv)
{
	Solution sol ;
//	ListNode e(5 , NULL) ;
//	ListNode d(4 , &e) ;
	ListNode c(3 , NULL) ;
	ListNode b(2 , &c) ;
	ListNode a(1 , &b) ;
	ListNode *p = &a ;
	while(p != NULL)
	{
		std::cout<<p->val <<std::endl ;
		p = p->next ;
	}
	std::cout<<std::endl;
	ListNode *tmp = sol.removeNthFromEnd(&a , 2);
	if(tmp == NULL)
	{
		std::cout<<"no element"<<std::endl; 
	}
	else
	{
		//std::cout << "delete " <<tmp->val <<std::endl;

		ListNode *p = tmp ;
		std::cout<<"after delete"<<std::endl;
		while(p != NULL)
		{
			std::cout<<p->val <<std::endl ;
			p = p->next ;
		}
	}
	return 0 ;
}
