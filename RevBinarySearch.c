 #include <stdio.h>
int BinarySearch(int arr[] , int target , int low , int high){
	 int mid =(low + high)/2;
	 while(low<=high){
	 	mid =(low + high)/2;
	 	if(arr[mid]==target){
	 		return mid;
	 		break;
		 }else if(arr[mid]<target){
		 	low = low + 1;
		 	break;
		 }else{
		 	high = mid - 1 ;
		 	return high;
		 	break;
		 }
		 low++;
	 }
	 return -1 ;
}

int main(){
	int arr[]={23,2,6,8,6};
	int target = 23;	
	int result = BinarySearch(arr , target , 0 , 4);
	if(result != -1){
		printf("The result is found on index %d" ,result);
	}else{
		printf("the result is not found ");
	}
	
	return 0;
}