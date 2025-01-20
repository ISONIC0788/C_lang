#include <stdio.h>
#include <math.h>
void calcultate (){
	/*
	  variable derclation
	*/
	float a , b , result;
	char ch;
	
	
	/*
	  first message 
	*/
	printf("Hellow this simple  calculate ");
	printf("\n==============================\n");
	printf("\nEnter First number:");
	scanf("%f",&a);
	printf("\nEnter operatiion::");
	scanf("%c",&ch);
	scanf("%c",&ch);
	printf("\nEnter Second  number: ");
	scanf("%f",&b);
	switch(ch){
		case '+':
			/*..................
			............
			*/
			result = a + b;
			printf("The result of addition %f + %f = %.2f",a,b,result);
		break;
		case '*':
			result = a * b;
			printf("The result of addition %f * %f = %.2f",a,b,result);
		break;
		case '-':
			result = a - b;
			printf("The result of addition %f - %f = %.2f",a,b,result);
		break;
		case '/':
			result = a / b;
			printf("The result of addition %f / %f = %.2f",a,b,result);
		break;
		default:
			printf ("Invalid operation");
	}
}
/*
this function is used to check inputed number whether  odd or even 

*/
void printOddEven(){
	/*variable decration */
	char name[] ="" ;
	int  number;
	printf("Hellow user Enter you name :");
	scanf("%s",&name);
	printf("\n you name is %s",name);
	printf("\n Enter the number you:");
	scanf("%d",number);
	scanf("%d",number);
//	if (number % 2 == 0){
//		printf("The number is Even ");
//	}else {
//		printf("The number is odd");
//	}
}
void checknumber(){
	// decreare variable 
	int press , num1 , square =0 ;
	//message 
	printf("Press 1 to check number\n");
	printf("Press 2 to dispaly square of number\n");
	printf("Press 3 to Dispaly the message\n");
	printf("Enter your choice ");
	scanf("%d",&press);
	
	
	switch(press){
		case 1:
			printf("Enter the number:");
			scanf("%d",&num1);
			if (num1 %2 ==0){
				printf("The number is Even ");
			}else{
			    printf("The number is odd ");	
			}
			
		break;
		case 2:
			printf("Enter the number:");
			scanf("%d",&num1);
//			square = num1 << 2;
            square = pow(num1,2);
			
			printf("The square of number:%d is %d ",num1,square);
			
		break;
		case 3:
			printf("The end of progarm");
//			scanf("%d",&num1);
			
		break;
		default:
			printf ("Try Again ");		
	}
		
}
int main(){
	/*
	 function calll
	*/
calcultate();
printOddEven();
checknumber();
	return 0;
}