#include "Stack_C_API.h"
#include <stdio.h>

int main()
{

	Stack S = CreateStack(10);
	float temp;


	push(&S, 77.4);
	push(&S, 10.1);
        pop(&S, &temp);
        printf("\nPopped Value %f \n", temp);
	push(&S, 1.2);
	push(&S, 44.5);
	push(&S, 23.2);
	push(&S, 101.1);

	pop(&S, &temp);
	printf("\nPopped Value %f \n", temp);

	int n=0;
	float* x = stackToArray(&S, &n);
	printf("Stack to array - ");
	for(int i=0; i<n; i++)
	{
		printf(" %f ", x[i]);
	}

	printf("\n");

        pop(&S, &temp);
        printf("\n1. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n2. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n3. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n4. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n5. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n6. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n7. Popped Value %f \n", temp);
        pop(&S, &temp);
        printf("\n8. Popped Value %f \n", temp);


	return 0;

}
