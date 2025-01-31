 #include <stdio.h>

int main() {
	
   int arr[] = {24,35, 32, 34 , 45,67};
   int sum =0, arraylength ;
   arraylength = sizeof(arr)/sizeof(arr[0]);
    printf("The array size is %d",arraylength);
    for (int i =0 ; i<arraylength;i++){
         sum  += arr[i];
		  
	}
	printf("\n The sum of Array is %d",sum);
//    int arr[] = {1, 2, 3, 4, 5};
//    int sum = 0;
//    for(int i = 0; i < 5; i++) {
//        sum += arr[i];
//    }
//    printf("Sum of elements: %d\n", sum);
    return 0;
}
