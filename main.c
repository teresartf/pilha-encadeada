#include "pilha.h"

int main() {
    //criando pilha
    Stack* new_stack = criar(5);

    //pop vazia
    pop(new_stack);

    //push 10, 20, 30, 40, 50
    push(new_stack, 10);
    push(new_stack, 20);
    push(new_stack, 30);
    push(new_stack, 40);
    push(new_stack, 50);

    //show
    show(new_stack); 

    //push lotada
    push(new_stack, 60);

    //pop
    pop(new_stack);

    //show 40, 30, 20, 10
    show(new_stack); 

    return 0;
}