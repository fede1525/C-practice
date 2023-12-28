// Write a C program to calculate the distance between two points. 

#include <cstdlib>
#include <stdio.h>
#include <math.h>

int calculateDistance(int x, int y);

int main(){

	int x, y;

	printf("Enter starting point: \n");
	scanf("%d", &x);
	printf("Enter the end point: \n");
	scanf("%d", &y);

	double distance = calculateDistance(x, y);

	printf("Total distance between point x and point y: %lf", distance);

	return 0;
}


int calculateDistance(int x, int y){

	return abs(x - y); 
}
