#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "freak.h"
#include "freak.c"

int main(int argc, char *argv[]) {
        char *endptr;
	long n = strtol(argv[1], &endptr, 10);

   	struct node *head = buildList(n);
#if 0
	newBase(88, head);
	addToEnd(99, &head);
#endif
      	int num = count(head);
	printLinkedList(head);
	printf("The count is: %d\n", num);
		
	return EXIT_SUCCESS;
}
