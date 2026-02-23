
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:
 * ID:
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

  int salary = 36250;
	int NIrate = 8;
	int taxRate = 15;	
	
	float NIContribution =  salary * NIRate / 100; //2,900
	float takeHomeSalary = salary - NIContribution; //33,350
	
	
	float taxContribution = (takeHomeSalary - 12500) * taxRate / 100; //3,127.5
	
	takeHomeSalary = takeHomeSalary - taxContribution; //30,222.5
	
	printf("Salary £...",salary);
    printf("NI contribution £",NIContribution);
    printf("Tax contribution £...",taxContribution);
    printf("Take home salary £...",takeHomeSalary);

    return 0;

    return 0;
 }
