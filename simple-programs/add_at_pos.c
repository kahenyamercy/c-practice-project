#include<stdio.h>
#include<stdlib.h>

/**
 * struct Node - Define the structure for a node in the linked list
 * @data: pointer to data
 * @next: holds the link to the next node
 */
struct Node {
	int data;
	struct Node *next;
};

/**
 * addToLinkedList - Add a new node at the beginning of the linked list
 * @head: Pointer to the head of the linked list
 * @value: Value to be added to the new node
 * Return: Pointer to the new head of the linked list
 */
struct Node *addToLinkedList(struct Node *head, int value)
{
	/* Create a new node*/
	struct Node *newNode = malloc(sizeof(struct Node));

	if (newNode == NULL)
	{
		printf("Memory allocation failed.");
		return (head);
	}

	/* Set the value of the new node and update the next pointer*/
	newNode->data = value;
	newNode->next = head;

	/* Update the head pointer to point to the new node*/
	head = newNode;

	return (head);
}

/**
 * displayLinkedList - Display the elements in the linked list
 * @head: Pointer to the head of the linked list
 */
void displayLinkedList(struct Node *head)
{
	printf("Linked List: ");
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	struct Node *head = NULL;

	head = addToLinkedList(head, 3);
	head = addToLinkedList(head, 5);
	head = addToLinkedList(head, 7);
	displayLinkedList(head);

	return (0);
}

