/*************************************************************************
  > File Name: merge.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Thu 17 Apr 2014 10:07:19 PM CST
 ************************************************************************/

#include<iostream>
struct ListNode{
	int val ;
	ListNode *next ;
	ListNode(int x , ListNode *next):val(x) , next(next){}
};
class Solution{
	public:
		ListNode *mergeTwoLists(ListNode *l1 , ListNode *l2)
		{
			if(l1 == NULL)
			{
				if(l2 != NULL)
				{
					return l2 ;
				}
				return NULL ;
			}
			if(l2 == NULL)
			{
				if(l1 != NULL)
				{
					return l1 ;
				}
				return NULL ;
			}
			ListNode *p1 = l1 ;
			ListNode *p2 = l2 ;
			ListNode *pCur1 = NULL;
			ListNode *pCur2 = NULL ;
			while(p1 != NULL && p2 != NULL)
			{
				if(p1->val <=  p2->val)
				{

					pCur1 = p1 ;
					p1 = p1->next ;
				}
				else
				{

					pCur2 = p2->next ;
					p2->next = p1 ;
					if(pCur1 == NULL)
					{
						pCur1 = p2 ;
						l1 = p2 ;
					}
					else
					{
						pCur1->next = p2 ;
						pCur1 = p2 ;
					}
					p2 = pCur2 ;
				}
			}
			while(p2 != NULL)
			{
				pCur1->next = p2 ;
				pCur1 = p2 ;
				p2 = p2->next ;
			}
			return l1 ;
		}
};

int main(int argc , char **argv)
{
	//	ListNode n9(9 , NULL) ;
	//	ListNode n7(7 , &n9) ;
	//	ListNode n5(5 , &n7) ;
	//	ListNode n3(3 , &n5) ;
	ListNode n1(1 , NULL) ;
	//	ListNode n10(10 , NULL) ;
	//	ListNode n8(8 , &n10) ;
	//	ListNode n6(6 , &n8) ;
	//	ListNode n4(4 , &n6) ;
	ListNode n2(2 , NULL) ;
	ListNode *l ;
	Solution sol ;
	l = sol.mergeTwoLists(&n2 , &n1) ;
	while(l != NULL)
	{
		std::cout<<l->val <<std::endl;
		l = l->next ;
	}
	return 0 ;
}
