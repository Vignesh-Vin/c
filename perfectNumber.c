#include <stdio.h>
int main()
{
	int number, sum = 0;
	printf("Enter a number: \n");
	scanf("%d", &number);

	for (int i = 1; i < number; i++) {
		if (number % i == 0) {
			sum = sum + i;
		}
	}

	//printf("%d total sum\n", sum);
	//printf("%d number\n", number);
	if (number == sum) {
		printf("%d is a perfect number\n", number);
	} else {
		printf("%d is not a perfect number\n", number);
	}

}