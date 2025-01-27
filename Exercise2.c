 #include <stdio.h>
int main(){
 float arr[4] ;
 printf("Enter  Mark for course (0-100)\n");	
 scanf ("%f",&arr[0]);
 printf("Enter  Mark for course (0-100)\n");
 scanf("%f",&arr[1]);
 printf("Enter  Mark for course (0-100)\n");
 scanf ("%f",&arr[2]);
 printf("Enter  Mark for course (0-100)\n");
 scanf ("%f",&arr[3]);
 int sum = arr[0]+arr[0]+arr[0]+arr[0];
 
 if((arr[0]>0&&arr[0]<=100)&&(arr[1]>0&&arr[1]<=100)&&(arr[2]>0&&arr[2]<=100)&&(arr[3]>0&&arr[3]<=100)){
 	printf("\nThe Sum is %d ",sum);
 	if (sum>=300 && sum<=400){
 		printf("\n Frist class");
	 }else if(sum>=160&&sum<=299){
	 	printf("\n Second Class");
	   }else if(sum>=100&&sum<=159){
	   	printf("\n Thrid  Class");
	   }else{
	   	 printf("Fail");
	   }
	 
	 }else{
 	printf(" Invalid number  ");
 }
	return 0;
}