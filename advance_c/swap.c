#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a =*b;
	*b =temp;
}
int main() {
	int x =10;
	int y =99;

	printf("--- Before Magic ---\n");
	printf("x is: %d\n", x);
	printf("y is: %d\n", y);

	swap(&x, &y);

	printf("\n--- After Magic ---\n");
	printf("x is: %d\n", x);
	printf("y is: %d\n", y);

	return 0;
}

