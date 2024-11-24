#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	/* Initialise variables */ 
	int a, N;
	float b, sum, x, integ, error;

	// Provide values for variables
	a = 0; // Lower bound for integration
	b = 1.04719755; // Upper bound for integration
	N = 12; // Intervals used for tarpezoidal rule
	x = b / N; // Interval size

	// Calculates the first and last part of trapezoidal rule sum
	sum = tan(a) + tan(b);

	// For loop to calculate the other parts of the sum
	for (int i=1; i<N; i++){
		sum = sum + (2*tan(x*i));
	}

	// Finally multipling sum by b-a/2N to find value of integral
	 sum = sum * (b / (2*N));

	// Printing the value found using trapezoidal rule
	printf("Integration of tan(x) from 0 to pi/3 using trapezoidal rule = %f \n", sum);

	// Printing real value of the integral
	integ= log(2);
	printf("Real value of the integral i.e., ln(2) = %f \n", integ);

	// Find the percentage error
    error = (integ- sum)*100/integ;

   printf("Percentage error = %f\n",error);

	return 0; 
}
