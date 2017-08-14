#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void my_stack_init(struct my_stack* stack, int size) {
	stack->size = size;
	stack->sptr = 0;
	if (!(stack->array = (double*) malloc(size * sizeof(double)))) {
		exit(-1);
	}
	memset(stack->array, 0, size);
}
void push(struct my_stack* stack, double num) {
	if (stack->sptr < stack->size) {
		stack->array[stack->sptr++] = num;
	}
	else 
		printf("the stack is full\n");
	
}
double pop(struct my_stack* stack) {
	if (stack->sptr > 0)
		return stack->array[--stack->sptr];
	else {
		printf("the stack is empty\n");
		return 0.0;
	}		
}