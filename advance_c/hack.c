#include <stdio.h>

int main() {
	int secret_money = 100;
	int *key = &secret_money;

	printf("1.Normal date: %d\n", secret_money);
	printf("2.Memory Address (Room Number): %p\n", &secret_money);
	printf("3.What the pointer holds: %p\n",key);

	*key = 999999;

	printf("\n--- HACK SUCCESS ---\n");
	printf("4. Now the secret money is: %d\n", secret_money);

	return 0;
}

