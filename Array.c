#include<stdio.h>
#include<stdlib.h>

// function# 
void marsks (){
	printf("Enter number ");
	int nu ;
	scanf("%d",&nu);
	system("cls");
	float marks[10] ={45.7 ,85 ,44 , 67 , 53 , 49 ,26 , 59 , 72 , 65 };
	int j ;
	for (int j = 0; j<10 ; j++){
		printf("%.1f\t",marks[j]);
	}
	int sizeOfArray = sizeof(marks)/sizeof(marks[0]);
	printf("\nThe size of array is %d",sizeOfArray);
}
int main(){
	marsks ();
	return 0;
	
}