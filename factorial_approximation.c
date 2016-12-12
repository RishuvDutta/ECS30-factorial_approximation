#include <stdio.h>
#include <math.h>

int main(){
	double n;
	printf("Enter n: ");
	scanf("%lf", &n);

	double PI = 3.14159265;
	double n_factorial;
	double e_neg = exp(-n);
	n_factorial = pow(n, n) * e_neg * sqrt(PI * ((2.0 * n) + (1/3.0)));
	printf("n! equals approximately %.6f\n", n_factorial);
	return 0;                                              
}
