#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;

	printf("Enter a: ");
	scanf_s("%lf", &a);
	printf("Enter b: ");
	scanf_s("%lf", &b);
	printf("Enter c: ");
	scanf_s("%lf", &c);

	answer(b * b - 4 * a * c,a,b);
	return 0;
}

int answer(double D,double a,double b) {
	if (D > 0) {
		double root1;
		double root2;
		root1 = (-b + sqrt(D)) / (2 * a);
		root2 = (-b - sqrt(D)) / (2 * a);
		printf("%f,%f", root1, root2);
	}
	else if (D == 0) {
		double root;
		root = -b / (2 * a);
		printf("%f", root);
	}
	else
	{
		printf("‰ð‚È‚µ");
	}
	return 0;
}