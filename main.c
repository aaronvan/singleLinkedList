#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include "freak.h"
#include "freak.c"

int main(int argc, char *argv[]) {
	if (argc < 2) {
	    puts("Needs an argument.");
	    return EXIT_FAILURE;
	}

        char *endptr;
	errno = 0;
	long n = strtol(argv[1], &endptr, 10);

	if (errno == ERANGE) {
	    puts("Number is too large/small");
	    return EXIT_FAILURE;
	} else if (endptr == argv[1]) {
	    puts("Did not read a char.");
	    return EXIT_FAILURE;
	} else if (*endptr && *endptr != '\n') {
	    puts("Did not convert the entire input.");
	    return EXIT_FAILURE;
	}

   	struct node *head = buildList(n);
	assert(head != NULL);
#if 0
	newBase(88, head);
	addToEnd(99, &head);
#endif
      	int num = count(head);
	printLinkedList(head);
	printf("The count is: %d\n", num);
		
	return EXIT_SUCCESS;
}
