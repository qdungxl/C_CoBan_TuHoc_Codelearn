#include <stdio.h>

double circumference(double r) {
	double const PI = 3.14;
	return 2*PI*r;
}

int main() {
	double r;
	scanf("%lf", &r);
	printf("%f", circumference(r));
	return 0;
}
