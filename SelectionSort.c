#include<stdio.h>
void printArray(int arr[] ,int n ){
	for(int i ; i <n; i++){
		printf("");
		printf("%d\f",arr[i]);
		
	}
	
}
int main(){
	int arr[] = {64 ,25,12 ,22 ,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("thE NUMBER of %d ", n);
	printf("the original Array");
	printArray(arr,n);
	
	
	
	return 0;
}