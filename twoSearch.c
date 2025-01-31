 #include <stdio.h>
int learnerSearch(int arr[], int n , int target){
	for (int i = 0 ; i < n ; i ++  ){
         if(arr[i] == target ){
         	return i;
		 }		 
	}
	return -1 ;
}

int BinarySearch(int arr[] , int target  , int low , int high  ){
     
	 while(low<=high){
	 	int mid = (low + high ) /2 ;
	 	if(arr[mid] == target){
	 		return mid ;
		 }else if(arr[mid]<target){
		 	 low = mid + 1;
		 }else {
		 	 high = mid -1;
		 }
	 }
	 return -1;	
}
int main(){
	
	//
	int arr[] = {2 , 3, 6, 8, 7};
    int n = 5 ;
    int target = 2;
//    int result = learnerSearch(arr , 5 , target); 
	int result = BinarySearch(arr , target , 0 , n -1) ;
    if (result != -1){
       printf ("the result found on index  %d ",result)	;
	}else{
		printf("the result not found");
	}
	//binary seacrch 
	
	return 0;
}