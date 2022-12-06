#include <stdio.h>
#include <stdlib.h>

#define size 5

int Top = -1,array[size];

void push();
void pop();
void display();
void peep();
void change();

int main()
{
    int choice;
    
   while(1 == 1) {
        printf("\n$-----Menu-----$\n");
    printf("1.Insert Element in Stack\n");
    printf("2.Delete Element from Stack\n");
    printf("3.Diplay Element of Stack\n");
    printf("4.Peep Operation\n");
    printf("5.Change Operation\n");
    printf("6.Exit\n");
    printf("Enter Choice:");
    scanf("%d",&choice);
    
    switch(choice) {
        case 1: push();
        break;
        
        case 2: pop();
        break;
        
        case 3: display();
        break;
        
        case 4: peep();
        break;
        
        case 5: change();
        break;
        
        case 6: exit(0);
        break;
        
        default:
        printf("\nInvalid Choice");
    }
   }
    
    return 0;
}

void push() {
    int x;
    if(Top == size - 1) {
        printf("\nStack is OverFlow!!!") ;
    } else {
        Top += 1;
        printf("\nEnter Element to insert in Stack : ");
        scanf("%d",&x);
        array[Top] = x;
    }
}

void pop() {
    if(Top == -1) {
        printf("\nStack is UnderFlow!!!") ;
    } else {
        printf("\nPoped element is %d",array[Top]);
        Top -= 1;
    }
}

void display() {
    if(Top == -1) { 
        printf("\nStack is UnderFlow") ;
    } else {
        printf("\nStack element are : ");
        for(int i = Top; i >= 0; --i) {
            printf(" %d ",array[i]);    
        }
    }
}

void peep() {
    int i;
    printf("Enter index of element in Stack:");
    scanf("%d",&i);
    if(Top-i+1 < 0 || i == 0) {
        printf("\nStack is Underflow");
    } else {
        printf("%d",array[Top-i+1]);
    }
}

void change() {
    int i,x;
    printf("Enter index of element in Stack:");
    scanf("%d",&i);
    printf("Enter element : ");
    scanf("%d",&x);
    if(Top-i+1 < 0 || i == 0) {
        printf("\nStack is Underflow");
    } else {
        array[Top-i+1] = x;
        display();
    }
}