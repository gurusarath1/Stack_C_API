#include <stdio.h>
#include <stdlib.h>

typedef float STACK_DATA;

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

