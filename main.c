#include <stdlib.h>
#include <stdio.h>

#include "stack.h"

void print_int_stack(stack_node_t* head)
{
    stack_node_t *node = head;
    while (node->next != NULL)
    {
        printf("int = %d\n", *((int*)node->value));
        node = node->next;
    }
}

int main(void)
{
    /*
    stack_node_t* stack_head = init_stack();

    for (int i = 0; i < 50; i ++)
    {
        int* value = (int*)malloc(sizeof(int));
        *value = i;

        stack_node_t new_node = create_node((void*) value);

        push(new_node, &stack_head);
    }

    printf("peeked int = %d\n", *((int*)peek(stack_head).value));

       for (int i = 0; i < 100; i ++)
    {
        stack_node_t new_node = pop(&stack_head);

        if (new_node.value != NULL)
            printf("popped int = %d\n", *((int*)new_node.value));

        free(new_node.value);
    }

    if (is_empty(stack_head)) printf("stack is empty!\n");

    print_int_stack(stack_head);

    del_stack(stack_head);
    */
   
    return 0;
}