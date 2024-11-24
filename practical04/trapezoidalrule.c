#include <stdio.h>
#include <math.h>

// Declaration
float pi;
float degtorad(float arg);
float trapsum(float trap_vals[13]);
float tan_vals[13];

//main function with loop
int main(void){
	float degang, radang;
	float sum;
	pi = atan(1.0)*4.0;
	for (int i=0; i<13; i++){
		degang = i*5.0;
		radang = degtorad(degang);
		tan_vals[i] = tan(radang);
		printf("Array[%d] = Tan(%f deg) = Tan(%f rad) = %f \n", i, degang, radang, tan_vals[i]);
	}
	sum = trapsum(tan_vals);
	printf("Integral of tan(x) from 0 to 60 degrees = %f \n", sum);

	return 0; 
}

//function to convert angle from degree to radians
float degtorad(float arg) {
	return ((pi*arg)/180);
}

//function to calculate area under the curve using trapezoidal rule
float trapsum(float tan_vals[13]) {
	float sum;
	sum = tan_vals[12];
	for (int i=1; i<12; i++) {
		sum = sum + (2*tan_vals[i]);
	}
	sum = ( 1.0472 / (2*12) ) * sum;
	
	return sum;
}
