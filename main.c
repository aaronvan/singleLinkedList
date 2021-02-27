#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "freak.h"
#include "freak.c"
#define SIZE 7

int main(void) {
	
	int num;
	struct node *head = NULL;
		
	for (size_t i=0; i<=SIZE; i++) {
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		assert(temp != NULL);
		temp->n = i;
		temp->next = head;
		head = temp;
	}
	
	newBase(88, head);
	addToEnd(99, &head);
	num = count(head);
	printLinkedList(head);
	printf("The count is: %d\n", num);
		
	free(head);
				
	return EXIT_SUCCESS;
}