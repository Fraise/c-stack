#include <stdint.h>

typedef struct stack_node
{
    void *value;
    struct stack_node *next;
} stack_node_t;

stack_node_t* init_stack();

void del_stack(stack_node_t *head);
stack_node_t create_node(void* data_ptr);
void push(stack_node_t node, stack_node_t **head);
stack_node_t pop(stack_node_t **head);
stack_node_t peek(stack_node_t *head);
int is_empty(stack_node_t *head);