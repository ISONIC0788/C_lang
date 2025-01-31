# include <stdio.h>
int  binarySearch(int arr[] , int target , int low , int high ){
	while(low <= high){
		int mid = (low + high )/2;
		if (arr[mid] == target){
		 return mid;	
		}else if (arr[mid] <target){
		    low = mid + 1;
		   }
		else {
			 high =  mid-1 ;
		}
		   
		    
	}
	return -1 ;
	
}
int main(){
	 // binary search 
	 int arr[] = {1,3,5,7,9,11};
	 
	 int target = 7;
	 int result = binarySearch(arr ,target , 0,5 );
	 
	 if (result != -1){
	 	printf("The item is found on index %d", result );
	 }else{
	 	printf("The item  is not found in array  ");
	 }
	     
return 0 ; 
}