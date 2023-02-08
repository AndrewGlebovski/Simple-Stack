#include <stdio.h>
#include "stack.hpp"


int main() {
    Stack stack = {};

    stack_constructor(&stack, 1);

    for(int i = 0; i < 16; i++)
        stack_push(&stack, i);

    for(int i = 0; i < 14; i++) {
        int value;
        stack_pop(&stack, &value);
    }

    stack_dump(&stack, 0, stdout);

    stack_destructor(&stack);

    printf("Stack!\n");

    return 0;
}
