#include <stdio.h>
void Pyramid(){
	int row = 6;
	for(int i =0;i<row;i++ ){
		// for sapce 
		for ( int j= row ;j>1;j--){
			printf("");
		}
		for(int j = 0 ; j<=i ;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
void second(){
		for(int i =0;i<=5;i++ ){
		// for sapce 
		for ( int s=1 ; s<=5-i ;s++){
			printf(" ");
		}
		for(int j = 1 ; j<=i*2-1 ;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	second();
	
//	Pyramid ();
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