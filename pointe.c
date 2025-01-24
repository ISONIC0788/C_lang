#include <stdio.h>
#include <stdlib.h>
void  example(){
	int var = 10 ;
	int *ptr = &var;
	printf(" the s %p\n",ptr);
	printf("the value at%d \n",var);
	
    printf("The value at %d",*ptr);
}
int main(){
	example();
	return 0;
}