typedef struct stack_node
{
    int size;
    void *value;
    struct stack_node *next;
} stack_node_t;

int push(stack_node_t node, stack_node_t *head);

stack_node_t pop(stack_node_t *head);

stack_node_t peek(stack_node_t *head);

int isEmpty(stack_node_t *head);