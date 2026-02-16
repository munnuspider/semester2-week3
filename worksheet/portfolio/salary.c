
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Bhavya Trivedi
 * ID: 20194909
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    float salary = 36250;
    float ni_rate = 0.08;
    float tax_rate = 0.15;

    float ni_amount =  ni_rate * salary;
    float tax_amount = (salary - ni_amount) - 12500;
    tax_amount = tax_rate * tax_amount;
   float take_home = salary - ni_amount - tax_amount;


    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_amount);
    printf("Tax contribution £%.2f\n", tax_amount);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
 }