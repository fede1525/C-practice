// Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".

#include <stdio.h>

void compareValues(int p, int q, int r, int s);

int main(){
	
	int p, q, r, s;

	printf("Enter value of 'p' (even): ");
    scanf("%d", &p);	
	
	printf("Enter value of 'q' (positive): ");
	scanf("%d", &q);

	printf("Enter value of 'r' (positive): ");
	scanf("%d", &r);

	printf("Enter value of 's' (positive): ");
	scanf("%d", &s);

	compareValues(p, q, r, s);

	return 0;
}

void compareValues(int p, int q, int r, int s){
	int aux = r + s;
	int aux2 = q + p;
	if(q > 0 && r > 0 && s > 0 && p % 2 == 0 && q > r && s > p && aux > aux2){
		printf("Correct values");
	} else {
		printf("Wrong values");
	}
}
