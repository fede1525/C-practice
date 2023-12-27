// Write a C program that accepts three integers and finds the maximum of three. 

int main(){




	return 0;
}

int maximumThree(int num1, int num2, int num3){
	int maxNum = num1;

	if(num2 > num1) maxNum = num2;
	if(num3 > num1 && num3 > num2) maxNum = num3;


	return maxNum;
}
