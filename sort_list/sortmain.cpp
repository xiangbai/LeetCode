/*************************************************************************
  > File Name: sortmain.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Sun 13 Apr 2014 11:21:33 AM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<string>
#include<unistd.h>
struct ListNode{
	int val ;
	ListNode *next ;
	ListNode(int x , ListNode *pNext):val(x),next(pNext){
	}

	ListNode &operator=(const ListNode &other) {
		val = other.val ;
		if(next != NULL)
		{
			next = NULL ;
		}
		next = other.next ;
		return *this ;
	}
	bool operator ==(const ListNode &lhs , const ListNode &rhs)
	{
		if(((object)lhs) == ((object)rhs))
			return true ;
		if(((object)lhs) == NULL || ((object)rhs == NULL))
			return false ;
	}
};
class Solution{
	friend struct ListNode ;
	private:
	//快慢指针
	ListNode midNode(ListNode head)
	{
		std::cout<<"midnode  "<<head.val<<std::endl;
		ListNode slow = head ;
		ListNode fast = *(head.next) ;
		int count = 0 ;
		while(fast.next->next != NULL)
		{
			fast = *(fast.next->next);
			slow = *(slow.next) ;
			++count ;
		}
		std::cout<<"count = "<<count <<std::endl;
		return slow ;
	}
	public:
	ListNode &sortList(ListNode &head)
	{
		ListNode mid = midNode(head);
		std::cout<<mid.val<<std::endl;
	}
};
int main()
{
	//不含头结点法
	ListNode g(46 , NULL) ;
	ListNode f(89 , &g);
	ListNode e(34 , &f);
	ListNode d(35 , &e);
	ListNode c(12 , &d);
	ListNode b(15 , &c);
	ListNode a(31 , &b);
	ListNode p = a ;
	while(p != NULL)
	{
		p = *(p.next);
	}
	Solution myS ;
	a = myS.sortList(a) ;
	return 0 ;
}
