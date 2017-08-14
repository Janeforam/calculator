#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define NUMBER '0'
#define MAXOP 100



char getop(char* s) {

}
int main(int argc, char** argv) {

	char op, s[MAXOP];
	struct my_stack stack;
	my_stack_init();
	op = getop(s);
	while (op != EOF) {
		switch (op) {
		case NUMBER:
			push(atof(s);
			break;
		case '+':
			push(pop() + pop());
			break;
		case '-':
			double temp = pop();
			push(pop() - temp);
			break;
		case '*':
			push(pop() + pop());
			break;
		case  '/':
			double temp = pop();
			if (temp == 0)
				printf("Error: divider cannot be zero.")
				push(pop() / temp);
			break;
		case '\n':
			printf("result = %f\n", pop());
			break;
		default:
			break;
		}
		op = getop(s);
	}
	return 0;
}
