#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) 
{
	int sum = 0;
	while (list->head != NULL) 
	{	
		recursiveSum (list->head->next);
		sum += list->head->data;
	}
  return sum;
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) 
{
	int max = list->head->data;
	if (next == NULL)
		return max;
	else
	{
		if (max < next.recursiveLargestValue())
		{
			max = list->head->data;
		}
		else return max;
	}
	return next.recursiveLargestValue();
}

