// Write a C program that accepts some integers from the user and finds the highest value and the input position.

#include <stdio.h>

void highestValue();

int main(){

	highestValue();

	return 0;
}

void highestValue(){

	int arr[5];
	int max = -999999;
	int position = 0;

	for(int i = 0; i < 5; i++){
		scanf("%d ", arr[i]);
	}

	for(int i = 0; i < 5; i++){
		if(arr[i] > max){
			max = arr[i];
			position = i;
		}
	}

	printf("Highest value: %d\nPosition: %d\n", max, position);
}
