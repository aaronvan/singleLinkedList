/* freak.c */

/* 
 * buildList
 * Purpose: build a new singly linked list
 * Args: the number of nodes in the list
 * Return: a pointer to the newly created list
 */
struct node *buildList(int size) {
    struct node *listhead = NULL;
    for (size_t i=0; i<size; i++) {
		push(&listhead, i);
    }
    return listhead;
}

/*
 * push (also head)
 * Purpose: add a node to the front of the list
 * by changing the value of the pointer
 * Args: integer value and pointer to pointer to listhead
 * Return: void
 */
void push(struct node **listheadRef, int data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	assert(new != NULL);
	new->n = data;
	new->next = *listheadRef;
	*listheadRef = new;
}

/*
 * insertAtBase (also tail)
 * Purpose: adds a new node to the base of the linked list
 * Args: integer value, pointer to the list head
 * Return: void
 */
void insertAtBase(struct node *listhead, int data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	assert(new != NULL);
	new->n = data;
	while (listhead->next != NULL) {
		listhead = listhead->next;
	}
	listhead->next = new;
	new->next = NULL;
}

 /* 
  * deleteList
  * Purpose: clean up the list to avoid memory leaks
  * Args: pointer to list head
  * return: void
  */
 void deleteList(struct node *listhead) {
	 struct node *temp;
	 do {
		 temp = listhead;
		 listhead = listhead->next;
		 free(temp);
	 } while (listhead != NULL);
}

/*
 * count
 * Purpose: count the nodes in the list
 * Args: pointer to the list head
 * Return: integer value count
 */
int count(struct node *listhead) {
	struct node* current = listhead;
	int count = 0;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

/*
 * printLinkedList
 * Purpose: send the list to stdout
 * Args: pointer to list head
 * Return: void
 */
void printLinkedList(struct node *listhead) {
	while (listhead != NULL) {
		printf("%d\n", listhead->n);
		listhead = listhead->next;
	}
}

/*
 * makeNull
 * Purpose: set the list to NULL
 * Args: pointer to the list head
 * Return: void
 */
 void pointToNull(struct node **listheadRef) {
	 *listheadRef = NULL;
}