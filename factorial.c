#include<stdio.h>
int main() {
	// Factorial program
	int num;
	int fact = 1;
	printf("Enter your Number: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	printf("Factorial is: %d\n", fact);
}
