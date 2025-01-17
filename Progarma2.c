#include<stdio.h>
int add(int a , int b ){
	return a + b;
}
int  addNum(float num1,float num2 ){
	 int sum=0;
	printf("Enter Frist number ");
	scanf("%f",&num1);
	printf("Enter second number");
	scanf("%f",&num2);
	return sum=num1+num2;
	 
}
int main (){
	int n1 ;
	int n2 ;
	int total = 0;
	n1 = 10 ;
	n2 = 20;
	total = n1 + n2 ;
	printf("Total = %d ",total);
	int sum = add(45, 34);
	printf("\nThe sum of to number is:%d  ", sum);
	int out = addNum(12 ,23);
	printf("the output is %d", out );
	
	return 0;
}