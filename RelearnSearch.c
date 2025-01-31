 #include <stdio.h>

int renear ( int arr[] ,int  n , int target ){
	for (int i = 0 ; i <  n ; i ++ ){
		if(arr[i] == target)
		{
			return i ;
		}
	}
	return -1 ;
}
int main() {
  // learner search  
  int arr[6] = {3,6,5,8,7,8};
  int target = 6;
  
  int result = renear(arr , 5 , target );
  if (result !=-1){
  	 printf("The item is found on index %d", result);
  }
  
  return 0;
}