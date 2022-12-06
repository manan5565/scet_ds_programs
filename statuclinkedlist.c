// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
}; // here created Structure

displayLinkedList(struct Node * ptr) {
    printf("Linked List Elements are:-\n");
    while(ptr != NULL) {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    fourth = (struct Node *) malloc (sizeof(struct Node));
    
    head -> data = 7;
    head -> next = second;
    
    second -> data = 8;
    second -> next = third;
    
    third -> data = 9;
    third -> next = fourth;
    
    fourth -> data = 10;
    fourth -> next = NULL;
    printf("Static Linked list is Create\n");
        
    displayLinkedList(head);
    
    return 0;
}