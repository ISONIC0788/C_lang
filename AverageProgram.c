#include <stdio.h>
void  FindAverage(){
	float s1,s2,s3,s4,s5,sum=0,average=0;
	printf("Enter the Marks for Subject 1:");
	scanf("%f",&s1);
	printf("Enter the Marks for Subject 2:");
	scanf("%f",&s2);
	printf("Enter the Marks for Subject 3:");
	scanf("%f",&s3);
	printf("Enter the Marks for Subject 4:");
	scanf("%f",&s4);
	printf("Enter the Marks for Subject 5:");
	scanf("%f",&s5);

    if((s1>100||s1<0)||(s1>100||s1<0)||(s1>100||s1<0)||(s1>100||s1<0)||(s1>100||s1<0)){
    	printf("\nthe number is invalid\n");
    	
	}else{
		  /*************************************
    	  to calculate an avarage 
    	  */
    		sum=s1+s2+s3+s4+s5;
	        average=sum/5;
            printf("Average=%.2f",average);
              if(average >=50 && average <=100){
    	        printf("PASS");
	            }else{
	         	printf("Fail");
	           }
	}
	
  
}
void showDays(){
	/*.........................
	this program it can present the days of the week depend on user input
	.............................*/
	printf("Enter number of days");
	int number ;
	scanf("%d",&number);
	if (number>=1&&number<=7){
	  printf("\n That is right \n");
	  printf("===================");
	  switch(number){
	  	case'1':
	  		printf("\nMonday------\n");
	  	break;
	  	case'2':
	  		printf("\nTuesday------\n");
	  	break;
	  	case '3':
	  		printf("\nwednesday------\n");
	  	break;
	  	case '4':
	  		printf("\nThursday------\n");
	  	break;
	  	case '5':
	  		printf("\nFriday------\n");
	  	break;
	  	case '6':
	  		printf("\nsaturday------\n");
	  	break;
	  	default:
	  		printf("\nSunday------\n");
	  	
	  }	
	}else{
		printf("is not specified in days of week");
	}
}
int main(){
FindAverage();
printf("|_________________________________________________________________________________________________________|");
printf("|_________________________________________________________________________________________________________|");
showDays();
 return 0;
}