#ifndef __FREAK_H__
#define __FREAK_H__

struct node {
	int n;
	struct node *next;
};

void printLinkedList(struct node *);
void newBase(int, struct node *);
void addToEnd(int, struct node **);
int count(struct node *);

#endif