/* Linked list insert and delet operation*/
#include <stdio.h>
#include <stdlib.h>

//Define the node structure
struct Node {
    int data;
    struct  Node* next;
};

//Function to insert a node at the beginning 
void insertAtBeginnig(struct Node** head, int value){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

//Function to insert a node at the end
void insertEND(struct Node** head, int value){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

//Function to delete a node from the beginning 
void deleteFromBeginning(struct Node** head){
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)-> next;
    free(temp);
}

//Funtion to delete a node from the end 
void deleteFromEnd(struct Node** head){
    if(*head == NULL){
        printf("List is empty, nothing to delet.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    
    if(prev == NULL)
        *head = NULL;
    else
        prev->next = NULL;
    
        free(temp);
}

//Fuuniton to display linked List 
void printList(struct Node* head){
    struct Node* temp = head;
    while (temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

//Mian function
int main(){
    struct Node* head = NULL;
    
    insertAtBeginnig(&head, 10);
    insertAtBeginnig(&head, 20);
    insertEND(&head, 30);
    insertEND(&head, 40);

    printf("Linked List after insertions: ");
    printList(head);

    deleteFromBeginning(&head);
    printf("Linked list after deleting from beginning: ");
    printList(head);

    deleteFromEnd(&head);
    printf("Linked list after deleting from end: ");
    printList(head);

    return 0;  
}


