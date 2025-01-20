#include <stdio.h>
int main(){
 int k;
 for(k = 1; k<= 100 ; k=k*3){
 	printf("%d\t" , k);
 	if(k==27){
 		break;
	 }
 }
	return 0;
}