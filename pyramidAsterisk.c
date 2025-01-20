#include<stdio.h>
int main(){
	int row , cols , space  ;
	int n =5 ;
	for(row=0;row<=5;row++){ 	
	  for (space =0 ; space< n - row -1 ; space ++ ){ // logic 5 - 0 -1 = 4  // space 1 = 5 - 1
           printf("");	
		}
	   for(cols =0; cols<=(2*row)  ; cols++){
      
         printf("*");
//	   
	   }
	   printf("\n");
	}
	return 0;
}