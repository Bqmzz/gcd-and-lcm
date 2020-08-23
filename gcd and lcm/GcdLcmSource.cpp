#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int x, y, g, l;
	g = 1;
	printf("Enter frist number : ");
	scanf_s("%d", &x);
	printf("Enter second number : ");
	scanf_s("%d", &y);

	int a = abs(x), b = abs(y);
	while (b != 0) {
		int num = b;
		b = a % b;
		a = num;
	}
	g = a;
	l = (x * y) / g;

	printf("Greatest common divisor = %d\n", g);
	printf("Lest common multiple = %d\n", l);
	return 0;
}