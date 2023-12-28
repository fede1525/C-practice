//  Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
// Test Data :
// Input total distance in km: 350
// Input total fuel spent in liters: 5 

#include <stdio.h>

float calculateAvgConsumption(int distance, float fuel);

int main(){

	int distance = 0;
	float fuel = 0.00;


	printf("Enter the total distance in km: \n");
	scanf("%d", &distance);
	printf("Enter the spent fuel: \n");
	scanf("%f", &fuel);

	float avgConsumption = calculateAvgConsumption(distance, fuel);

	printf("Average fuel consumption: %.2f", avgConsumption);

	return 0;
}

float calculateAvgConsumption(int distance, float fuel){
	if(fuel != 0){
		return (float)distance / fuel;
	} else {

		return -1;
	}
}
