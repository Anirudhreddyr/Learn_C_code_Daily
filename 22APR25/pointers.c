#include <stdio.h>
#include <stdlib.h>

//stack node structure
struct  StackNode{
    int data;
    struct StackNode* next;
};

//Function to create a new node
struct StackNode* createNode(int data){
    struct StackNode* node = (struct StackNode*) malloc(sizeof(struct StackNode));
    node->data = data;
    node->next = NULL;
    return node;
}

//Push operation
void push(struct StackNode** top_ref, int data){
    struct Stacknode* node = createNode(data);
    node->next = *top_ref;
    *top_ref = node;
    printf("Pushed %d onto the stack\n", data);
}

//pop operation
int pop(struct StackNode** top_ref){
    if (*top_ref == NULL){
        printf("Stack Underflow! Nothing to pop.\n");
        return -1;
    }

    struct SatckNode* temp = *top_ref;
    int popped = temp->data;
    *top_ref = (*top_ref)->next;
    free(temp);
    return popped;
}

//peek opertion
int peek(struct StackNode* top){
    if (top == NULL){
        printf("Stack is empty.\n");
        return -1;
    }
    return top->data;
}

//Display stack
void printStack(struct StackNode* top){
    printf("Stack: ");
    while (top != NULL){
        printf("%d -> ", top-> data);
        top = top->data;
    }
    printf("NULL\n");
}

int main(){
    struct StackNode* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    printStack(top);

    printf("Top element is %d\n", peek(top));

    printf("Pooped element is %d\n", pop(top));
    printStack(top);

    printf("Pooped element is %d\n", pop(top));
    printStack(top);

    printf("Pooped element is %d\n", pop(top));
    printStack(top);

    //Trying to pop from a emty stack
    printf("Popped element is %d\n", pop(&top));

    return 0;
}