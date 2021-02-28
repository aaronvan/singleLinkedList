/* freak.c */

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

void addToEnd(int data, struct node **listhead) {
	struct node *top = (struct node *)malloc(sizeof(struct node));
	assert(top != NULL);
	top->n = data;
	top->next = *listhead;
	*listhead = top;
}

int count(struct node *listhead) {
	int num = 0;
	while (listhead != NULL) {
		listhead = listhead->next;
		num++;
	}
	return num;
}

void printLinkedList(struct node *listhead) {
	while (listhead != NULL) {
		printf("%d\n", listhead->n);
		listhead = listhead->next;
	}
}
