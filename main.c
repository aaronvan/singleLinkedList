#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "freak.h"
#include "freak.c"
#define SIZE 7

int main(void) {
   	struct node *head = buildList(20);
#if 0
	newBase(88, head);
	addToEnd(99, &head);
#endif
      	int num = count(head);
	printLinkedList(head);
	printf("The count is: %d\n", num);
		
	return EXIT_SUCCESS;
}
