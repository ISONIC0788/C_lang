 #include <stdio.h>
int lenearSearch (int arr[],int n , int terget){
	for(int i = 0 ; i< n ; i++){
	   if (arr[i] == terget){
	   	 return i;
	   }	
	}
	return -1;
}
int main(){
	int arr[6] ={2,7,3,6,8,5};
	int target = 6;
	//to preform leaner search 
	int  result = lenearSearch(arr , 6 , target);
	if(result !=-1){
		printf("the element is found at inde %d",result);
	}else{
		printf("The element is not found ");
	}
	
	return 0 ;
}