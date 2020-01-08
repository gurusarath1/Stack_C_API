#include <stdio.h>
#include <stdlib.h>
#include "Stack_C_API.h"


Stack CreateStack(int size)
{
	Stack S;
	S.Size = size;
	S.Head = 0;
	STACK_DATA* d = (STACK_DATA*)malloc(sizeof(STACK_DATA) * size);
	S.Data = d;
	return S;
}

errorCode push(Stack* s_ptr, STACK_DATA x)
{
	if(s_ptr->Head < s_ptr->Size)
	{
		(s_ptr->Data)[s_ptr->Head] = x;
		s_ptr->Head ++;
		return SUCCESS;
	}

	printf("\nStack is Full\n");
	return FAILURE;
}


errorCode pop(Stack* s_ptr, STACK_DATA* returnValue)
{

	if(s_ptr->Head >= 1)
	{
		s_ptr->Head -= 1;
		*returnValue = (s_ptr->Data)[s_ptr->Head];

		return SUCCESS;
	}

	printf("\nStack is Empty\n");
	return FAILURE;
}


YES_NO Stack_isEmpty(Stack* s_ptr)
{

	if(s_ptr->Head == 0)
	{
		return YES;
	}

	return NO;
}

YES_NO Stack_isFull(Stack* s_ptr)
{
	if(s_ptr->Head == (s_ptr->Size - 1))
	{
		return YES;
	}

	return NO;
}

STACK_DATA* stackToArray(Stack* s_ptr, int* sizeToReturn)
{

	int size = s_ptr->Size;

        STACK_DATA *a = (STACK_DATA*) malloc(sizeof(STACK_DATA) * size);
        STACK_DATA temp;
        int i = 0;

        while(!Stack_isEmpty(s_ptr))
        {
                pop(s_ptr, &temp);
                a[i++] = temp;
        }

	for(int j=i-1; j>=0; j++)
	{
		push(s_ptr, a[j]);
	}

	*sizeToReturn = i;

        return a;
}
