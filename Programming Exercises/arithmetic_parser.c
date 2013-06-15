#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	Stack *S = createStack(5);
	
	push(S,'7');
	push(S,'5');
	push(S,'1');
	push(S,'1');
	
	printf("max stack size: %d\n", S->max_size);
	printf("current stack size: %d\n", S->current_size);
	printf("Top element is %s\n",top(S));
	
	for (i = 0; i < S->current_size; ++i) {
		printf("elements: %d\n", i);
	}
	
    printf("Exiting\n");
	return 0;
}