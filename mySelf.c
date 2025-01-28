 #include <stdio.h>
#include <stdlib.h>
// creating node 

struct node {
	int data ;
	struct node *link;
};
int main(){
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    printf("THis head of node %d",head->data);
	return 0;
}