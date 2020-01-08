#include "Stack_C_API.h"
#include <stdio.h>

int main()
{

	Stack S = CreateStack(10);
	float temp;


	push(&S, 23.4);
	push(&S, 10.1);
	push(&S, 1.2);
	push(&S, 44.5);
	push(&S, 23.2);
	push(&S, 101.1);

	pop(&S, &temp);
	printf("\nPopped Value %f  ", temp);

	return 0;

}
