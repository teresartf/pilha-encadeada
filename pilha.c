#include "pilha.h"

Stack* criar(int max_size){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    
    stack->top = NULL;
    stack->max_size = max_size;
    stack->actual_size = 0;

    return stack;
}

int is_empty(Stack* stack){
    return stack->top == NULL;
}

int can_pop(Stack* stack){
    return (!is_empty(stack));
}

int is_full(Stack* stack){
    return stack->actual_size == stack->max_size;
}

int can_push(Stack* stack){
    return (!is_full(stack));
}

void push(Stack* stack, float value){
    if(!can_push(stack)){
        printf("\nCapacidade da pilha estourou!");
        return;
    }

    //cria nó
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = stack->top;
    stack->top = node;
    stack->actual_size++;
}

int pop(Stack* stack){
    if(!can_pop(stack)){
        printf("\nPilha vazia!");
        return -1;
    }

    Node* node = stack->top;
    float v = node->value;

    stack->top = stack->top->next;
    stack->actual_size--;

    free(node);
    return v;
}

void libera (Stack* stack){
    Node* node = stack->top;
    while (node!=NULL) {
        Node* temp = node->next;
        free(node);
        node = temp;
    }

    free(stack);
}

void show(Stack* stack){
    if(is_empty(stack)){
        printf("\nPilha vazia.");
        return;
    }

    Node* node;

    for( node = stack->top; node != NULL; node = node->next){
        printf("\n%d", (int)node->value);
    }

    printf("\n");
}