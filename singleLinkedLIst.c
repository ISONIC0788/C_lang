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
    head->link=NULL;
    printf("%d",head->data);	
    struct node *prt = NULL;
    prt=malloc(sizeof(struct node ));
    prt->data= 35;
    prt->link=NULL;
    prt=head;
    
    while(prt!=NULL){
    	printf("%d\n",prt->data);
    	prt=prt->link;
	}
	return 0;
}