#include <stdio.h>
#include "include/my_stack.h"

int main() {
	int x;	
    
    printf("Capacity: %d\n", stack_capacity());

    while (!stack_is_full() ) {
		scanf("%d", &x);
		stack_push(x);
        printf("Current Size after fill in: %d\n", stack_size());
	}
	
    printf("Now goes popping!\n");
	while (!stack_is_empty() ) {
		x = stack_pop();
		printf("%d\n", x);
	}
	printf("\n");

	return 0;
}
