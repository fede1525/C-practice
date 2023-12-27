// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.  

#include <stdio.h>

void printIDAndSalary(int id, int hours, float pay);

int main(){

	printIDAndSalary(24561, 160, 8.50);

	return 0;
}


void printIDAndSalary (int id, int hours, float pay){

	printf("ID: %d\n" , &id);

	float totalPay = hours * pay;

	printf("Salary: %.2f\n", &totalPay);

}
