// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. 

#include <stdio.h>

void convertSeconds(int seconds);

int main(){

	convertSeconds(213124);	

	return 0;
}

void convertSeconds(int seconds){
	
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int remainingSeconds = seconds % 60;

	printf("%d:%d:%d\n", hours, minutes, remainingSeconds);	
}
