#include <stdio.h>
// global variable decraton 
 float houseAllowance ;
 float transAllowance ;
 float bonusAllowance;
 float communAllowance  ;
 float tax ;
 float insrance ;
 float netSary = 0;
float baseSalary = 0;
float grosSalary = 0;

//
 
   
//
float houssingAllowancefunc(int amount  ){
	houseAllowance = (amount * 14.5)/100;
	return  houseAllowance;
	
}
float transactionAllowance(int amount  ){
	transAllowance = (amount * 12.5)/100;
	return  transAllowance;
	
}
float bonusAllowances(int amount ){
	bonusAllowance = (amount * 8.5)/100;
	return  bonusAllowance;
	
}

float communAllowances(int amount ){
	communAllowance = (amount * 8.9)/100;
	return  communAllowance;
	
}

float baseSalarys(int amount){
    int baseCent	 = 100 - (14.5+12.5+8.5+8.9);
	baseSalary = (amount * baseCent)/100;
	return  baseSalary;	
}

float insurance(int grossSarry){
    insrance = ( grosSalary* 11.5)/100;
	return  insrance;	
}

 
 
 float it24rp07192();
 
 
int main(){
    float amount ;
    char name[30];
    printf("Hellow Enter your amount 48500 500000 between:\n ");
    scanf("%f",&amount);
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Name is :%s\n",name);
    if (amount>=48500 && amount<=50000000 ){
     	
     	
	 }
    

   printf("\n the house Allowance %.2f \n ",houssingAllowancefunc(amount));
   
   printf("\nthe Transaction Allowance %.2f \n",transactionAllowance(amount));
   
   printf("\nthe bonus Allowance %.2f \n",bonusAllowances(amount));
   
   printf("\nthe communucation  Allowance %.2f \n",communAllowances(amount));
   
   printf("\nthe Base Salary %.2f \n",baseSalarys(amount));
   
    grosSalary = baseSalarys(amount)+houssingAllowancefunc(amount)+transactionAllowance(amount)
   +bonusAllowances(amount)+communAllowances(amount);
   printf("\n The gross Saray is:%.2f",grosSalary);
    
   printf("\n The gross Saray is:%.2f",insurance(grosSalary));
   
    if (grosSalary>=60001 && grosSalary<=100000 ){
     	 tax = (amount*10)/100;
     	 printf("\nthe tax is %.2f",tax);
     	
	 }else if (grosSalary>=100001 && grosSalary<=200000){
	 	 tax = (amount*20)/100;
	 	 printf("\nthe tax is %.2f",tax);
	 }else {
	 	// for above 200 000 
	 	
	 	 tax = (amount*30)/100;
	 	 printf("\nthe tax is %.2f",tax);
	 }
   
  

//     
//     netSary =  grosSalary - tax - insrance;
netSary = grosSalary - tax- insurance(grosSalary);
 printf("\n the net sarry is %0.2f",netSary);

	 
        
     
     
	return 0;
}
 float it24rp07192(){
	
}