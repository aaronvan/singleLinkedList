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
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	assert(temp != NULL);
	temp->n = i;
	temp->next = listhead;
	listhead = temp;
    }
    return listhead;
}

/*
 * newBase
 * Purpose: adds a new node to the base of the linked list
 * Args: integer value, pointer to the list head
 * Return: void
 */
void newBase(int data, struct node *listhead) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	assert(new != NULL);
	new->n = data;
	
	while (listhead != NULL && listhead->next != NULL) {
		listhead = listhead->next;
	}
	listhead->next = new;
	new->next = NULL;
}

/*
 * addToEnd
 * Purpose: add a node to the end of the list
 * Args: integer value and pointer to pointer to listhead
 * Return: void
 */
void addToEnd(int data, struct node **listhead) {
	struct node *top = (struct node *)malloc(sizeof(struct node));
	assert(top != NULL);
	top->n = data;
	top->next = *listhead;
	*listhead = top;
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
