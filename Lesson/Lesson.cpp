#include <stdio.h>

int main() {
	int a = 5, b = 0, c = 5, d = 0, simple = 0;

	scanf_s("INPUT=%d\n", &simple);
	simple = simple + 1;
	printf("%d\n", simple);

	// Calculate a = a+b-2
	a = a + b - 2;
	printf("a=%d\n", a);

	// Calculate c = c+1, d = c-a+d
	c = c + 1;
	d = c - a + d;
	printf("c=%d\n", c);
	printf("d=%d\n", d);

	// Calculate a = a*c, c = c-1
	a = a * c;
	c = c - 1;
	printf("a=%d\n", a);
	printf("c=%d\n", c);

	// Calculate a = a/10, c = c/2, b = b-1, d = d*(c+b+a)
	a = a / 10;
	c = c / 2;
	b = b - 1;
	d = d * (c + b + a);

	// Print final values
	printf("Final results:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	
	return 0;
}
