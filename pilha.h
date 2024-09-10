#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    float value;
    struct node* next;
}Node;

typedef struct stack{
    Node* top;
    int max_size;
    int actual_size;
}Stack;

Stack* criar(int max_size);
int is_empty(Stack* stack);
int is_full(Stack* stack);
int can_pop(Stack* stack);
int can_push(Stack* stack);
void push(Stack* stack, float value);
int pop(Stack* stack);
void liberar(Stack* stack);
void show(Stack* stack);
