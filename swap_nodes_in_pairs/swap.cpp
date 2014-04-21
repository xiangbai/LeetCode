/*************************************************************************
	> File Name: swap.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 19 Apr 2014 09:00:36 AM CST
 ************************************************************************/

#include<iostream>
struct ListNode
{
	int val ;
	ListNode *next ;
	ListNode(int x , ListNode *next):val(x) , next(next){} 
};

class Solution{
	public:
		ListNode *swapPairs(ListNode *head)
		{
			if(head == NULL)
			{
				return NULL ;
			}
			ListNode *pCur = head ;
			ListNode *pNext = NULL ;
			int temp ;
			while(pCur != NULL && pCur->next != NULL)
			{
				pNext = pCur->next ;
				std::cout<<pCur->val<<std::endl;
				std::cout<<pNext->val <<std::endl;

				temp = pCur->val ;
				pCur->val = pNext->val ;
				pNext->val = temp ;

				pCur = pNext->next ;
			}
			return head ;
		}
};
int main(int argc , char **argv)
{
	ListNode d(4 , NULL) ;
	ListNode c(3 , &d) ;
	ListNode b(2 , &c) ;
	ListNode a(1 , &b) ;
	Solution sol ;
	ListNode *tmp = sol.swapPairs(&a);
	while(tmp != NULL)
	{
		std::cout<<tmp->val << "->"  ;
		tmp = tmp->next ;
	}
	std::cout<<std::endl;
	return 0 ;
}
