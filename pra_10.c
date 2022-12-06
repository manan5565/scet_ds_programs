// C program for the all operations in
// the Doubly Linked List
#include <stdio.h>
#include <stdlib.h>

// Linked List Node
struct node {
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;

// Function to traverse the linked list
void traverse()
{
	// List is empty
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	// Else print the Data
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("Data = %d\n", temp->info);
		temp = temp->next;
	}
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;

	// Pointer of temp will be
	// assigned to start
	temp->next = start;
	start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->next = NULL;
	trav = start;

	// If start is NULL
	if (start == NULL) {

		start = temp;
	}
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

void deleteFirst()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        free(temp);
    }
}

void deleteEnd()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else {
		temp->prev->next = NULL;
		free(temp);
	}
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
{
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;

	// If DLL is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		// Position to be deleted
		printf("\nEnter position : ");
		scanf("%d", &pos);

		// If the position is the first node
		if (pos == 1) {
			deleteFirst(); // im,proved by Jay Ghughriwala on GeeksforGeeks
			if (start != NULL) {
				start->prev = NULL;
			}
			free(position);
			return;
		}

		// Traverse till position
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		// Change Links
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;

		// Free memory
		free(position);
	}
}

// Driver Code
int main()
{
	int choice;
	while (1) {

		printf("\n1 To see list\n");
		printf("2 Insert a node at the front of the linked list\n");
		printf("3 Insert a node at the end of the linked list\n");
		printf("4 Delete a last node of the linked list.\n");
		printf("5 Delete a node before specified position\n");
		printf("6 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			deleteEnd();
			break;
		case 5:
			deletePosition();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			continue;
		}
	}
	return 0;
}