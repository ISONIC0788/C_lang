 #include <stdio.h>
int main(){
	 int marks , total=0;
	 int i=1;
	printf("Enter your maka her:");
while (i<3){
	scanf("%d",&marks);
	if (marks>0&&marks<=30){
		total = total + marks;
	   	
     	}else{
		   printf("The you have entered large number \n");	
        }
		i++;
	};
	
        printf("Total marks %d",total);
	  	if(total>=42){
	  		printf("you are Competent :");
		  }else{
		  	printf("Your are note compent");
		  }

	
	
	return 0;
}