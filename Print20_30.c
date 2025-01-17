#include<stdio.h>
#include<string.h>
int numberPrint(int n ){
	if (n >30){
		numberPrint(n - 1);
		printf("\n%d" , n);
	}
	return 0;	
}
void loopnumber(){
	int init = 30;
	
	while (init <=50 && init >=30){
		printf("\n%d", init);
		init ++;
	}
//	return 0;
}


int main(){
     char myname[] = "ITUZE Agacyo ebedi meleck"; 
	 printf("hellow %s ", myname);
	 numberPrint(50);
	 printf("func looping number");
	 loopnumber();
	return 0;
	
}