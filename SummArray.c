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
	//this program it used to summ array
    return 0;
}
