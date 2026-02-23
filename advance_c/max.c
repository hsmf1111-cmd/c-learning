#include <stdio.h>

int main() {
	int scores[5] = {85, 92, 78, 99, 88};

	int max = scores[0];
	for (int i =1; i < 5; i++) {
	if (scores[i]>max)
		max=scores[i];
		}
	printf("The strongest agent's power is: %d\n", max);
	return 0;
}


