#ifndef STACK_H
#define STACK_H
struct my_stack {
	int sptr;
	double* array;
	int size;
};

void my_stack_init(struct my_stack* stack, int size);
void push(struct my_stack* stack, double num);
double pop(struct my_stack* stack);
#endif
