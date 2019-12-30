#include <stdio.h>
#include <stdlib.h>

typedef int STACK_DATA;

typedef enum errorCodes
{
	FAILURE,
	SUCCESS

}errorCode;

typedef enum YES_NO
{
	NO,
	YES
}YES_NO;


typedef struct Stack {

	int Head;
	int Size;
	STACK_DATA* Data;


} Stack ;


Stack CreateStack(int size);
errorCode push(Stack* s_ptr, STACK_DATA x);
errorCode pop(Stack* s_ptr, STACK_DATA* returnValue);
YES_NO Stack_isEmpty(Stack* s_ptr);
YES_NO Stack_isFull(Stack* s_ptr);

int main()
{


	Stack S = CreateStack(3);
	int x;
	float y;

	pop(&S, &x);

	push(&S, 9);
	push(&S, 1);
	push(&S, 2);
	push(&S, 4);


	pop(&S, &x);
	printf("\nPopped = %d", x);


	pop(&S, &x);
	printf("\nPopped = %d", x);


	pop(&S, &x);
	printf("\nPopped = %d", x);


	return 0;
}



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
