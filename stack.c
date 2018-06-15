#include <stddef.h>
#include <stdlib.h>

#include "stack.h"

stack_node_t* init_stack()
{
    stack_node_t *node = (stack_node_t*) malloc(sizeof(stack_node_t));

    node->next = NULL;
    node->value = NULL;

    return node;
}

void del_stack(stack_node_t *head)
{
    stack_node_t *prev_node;

    while (head->next != NULL)
    {
        free(head->value);

        prev_node = head;
        head = head->next;

        free(prev_node);
    }

    free(head);
}

stack_node_t create_node(void* data_ptr)
{
    stack_node_t new_node;

    new_node.value = data_ptr;
    new_node.next = NULL;

    return new_node;
}

void push(stack_node_t node, stack_node_t **head)
{
    stack_node_t* new_head = (stack_node_t*) malloc(sizeof(stack_node_t));

    new_head->next = *head;
    new_head->value = node.value;

    *head = new_head;
}

//pop only free the node popped from the stack, not it's value.
//It needs to be freed after accessing it

stack_node_t pop(stack_node_t **head)
{
    stack_node_t popped_node;

    popped_node.next = (*head)->next;
    popped_node.value = (*head)->value;

    //We don't free the node if it's the bottom one
    if ((*head)->value != NULL)
    {
        stack_node_t *prev_head = *head;
        *head = (*head)->next;

        free(prev_head);
    }

    return popped_node;
}

stack_node_t peek(stack_node_t *head)
{
    return *head;
}

int is_empty(stack_node_t *head)
{
    if (head->next == NULL)
        return 1;
    else
        return 0;
}