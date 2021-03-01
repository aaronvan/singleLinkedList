#ifndef __FREAK_H__
#define __FREAK_H__

struct node {
	int n;
	struct node *next;
};

struct node *buildList(int);
void printLinkedList(struct node *);
void insertAtBase(struct node *, int);
void insertAtFront(struct node **, int);
int count(struct node *);

#endif
