 #include <stdio.h>
#include <stdlib.h>

// to create node 

struct node{
	int data ;
	struct node *link;
};
int main(){
	struct node *head =NULL;
	head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    printf("%d",head->data);
	
	return 0;
}