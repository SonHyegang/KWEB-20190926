#include <stdio.h>
int main() {
	int i;
	int num = 6;
	int product = 1;
	for (i = 1; i <= num; i++) product *= i;
		printf("Factorial of %d is %d\n", num, product);
}
