#define _USE_MATH_DEFINES
#include<stdio.h> 
#include<math.h> 
int main(void) {
	int const x = 2;
	double res, t1, t2, t5;
	t1 = 2 * cos(x - M_PI / 6) + sqrt(2);
	t5 = pow(sin(x*x), 2);
	t2 = 1 / (2 * log(x)) + t5;
	res = (t1 / t2) * exp(3 * x);
	printf("%.6f", res);
	return 0;
}