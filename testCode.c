#include "Stack_C_API.h"
#include <stdio.h>

int main()
{

	Stack S = CreateStack(3);
	float temp;


	push(&S, 23.4);

	pop(&S, &temp);
	printf("\nPopped Value %f  ", temp);

	return 0;

}
