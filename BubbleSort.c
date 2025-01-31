#include <stdio.h>
int main(){
	
	// bubble sort 
	
	int arr[] = {2,3,5,6, 8, 7,8};
	int  n  = sizeof(arr)/ sizeof(arr[0]);
	for (int i = 0 ; i < n -1 ; i++){ // this is for printing array number 
	    for (int j = 0 ; j<n -i - 1; j++){
	    	if(arr[j]>arr[j+1]){
	    		int temp = arr[j];
	    		arr[j] =arr[j+1];
	    		arr[j+1] = temp;
			}
		}	
	}
	printf("Sorted array");
	for (int i = 0 ; i < n ; i++){
		 printf ("%d\t ",arr[i]);
		 
	}
	return 0 ;
}