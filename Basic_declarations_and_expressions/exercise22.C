//  Write a C program that reads 5 numbers and sums all odd values between them. 

#include <stdio.h>

int sumOddValues(int argc, int num1, int num2, int num3, int num4, int num5);

int main(){
		
	int sum = sumOddValues(5, 2, 5, 7, 8, 3);
	
	printf("Sum of odd values: %d\n", sum);

	return 0;
}

int sumOddValues(int argc, int num1, int num2, int num3, int num4, int num5){
	int sum = 0;
	int argv[] = {num1, num2, num3, num4, num5};

	for(int i = 0; i < argc; i++){
		if(argv[i] % 2 != 0) sum += argv[i];
	}

	return sum;
}
