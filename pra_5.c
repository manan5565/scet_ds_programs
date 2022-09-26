// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
// Front For delete and Rear for Insertion
#define N 5

int Rear=0,Front=0,Q[N];

void enqueue();
void dequeue();
void display();

int main() {
     int choice;
    
   while(1 == 1) {
        printf("\n$-----Menu-----$\n");
        printf("1.Insert Element in Queue\n");
        printf("2.Delete Element from Queue\n");
        printf("3.Diplay Element of Queue\n");
        printf("4.Exit\n");
        printf("Enter Choice:");
        scanf("%d",&choice);
    
    switch(choice) {
        case 1: enqueue();
        break;
        
        case 2: dequeue();
        break;
        
        case 3: display();
        break;
        
        case 4: exit(0);
        break;
        
        default:
        printf("\nInvalid Choice");
    }
   }

    return 0;
}

void enqueue() {
    int x;
    if(Rear >= N) {
        printf("\nQueue is Overflow");
    } else {
        printf("Enter element : ");
        scanf("%d",&x);
        Rear += 1;
        Q[Rear] = x; 
    }
    if(Front == 0) {
        Front += 1;
    }
}

void dequeue() {
    if(Front == 0) {
        printf("\nQueue is UnderFlow");
    } else {
        int e;
        e = Q[Front];
        printf("Deleted element is %d",e);
    }
    
    if(Front == Rear) {
        Front = 0;
        Rear = 0;
    } else {
        Front += 1;
    }
}

void display() {
    
    if(Rear == 0) {
        printf("\nQueue is Underflow");
    } else {
        printf("\nElemets of Queue :- \n");
        for(int i = Front; i <= Rear; i++) {
            printf("%d ",Q[i]);
        }
    }
}