 #include <stdio.h>
int main(){
	
	int arr[] = {1,2,2};
	int si = sizeof(arr)/sizeof(arr[0]);
	printf("the size is %d",si);
	return 0;
}