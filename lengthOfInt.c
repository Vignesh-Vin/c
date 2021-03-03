#include <stdio.h>
#include <conio.h>

int main() {
	int n, count;
	printf("Enter a number : ");
	scanf("%d", &n);

	for (int i = 1; n != 0; i++) {
		n /= 10;
		count = i;
	//	printf("%d ", i);
	}
	printf("It is a %d digit number.", count);
	
}