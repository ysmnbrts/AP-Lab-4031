#pragma once
#include "Account.h"


class AccountList
{
public:
	AccountList();
	AccountList(Account* _head);
	Account* getHead()const;
	void addAccount(Account* _accountToAdd);

	/* find element number i */
	Account& at(int i);

	/* sort by account uniqe id */
	void sort();

	/* search by the account uniqe id*/
	Account search(int _uniqeId);

	/*search by accout username*/
	void search(std::string _username);
	
	void swap(Account& acc1, Account& acc2);
	void print();
	Account *merge(Account *first, Account *second) 
	{
	
	  if (first == nullptr) return second;
	if (second == nullptr) return first;
	{
	    first->next = merge(first->next, second);
	    return first;
	}
	else {
	    second->next = merge(first, second->next);
	    return second;
	}
	}
	
	Account *MergeSort(Account *head) 
	{
	if (head == nullptr || head->next == nullptr)
	    return head;
	
	// Split the list into two halves
	Node *second = split(head);
	
	// Recursively sort each half
	head = MergeSort(head);
	second = MergeSort(second);
	
	// Merge the two sorted halves
	return merge(head, second);
	}
private:
	Account* head;
	int size;
};



