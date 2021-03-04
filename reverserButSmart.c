#include<stdio.h>
#include<string.h>

int main() {
	char name[50];
	printf("Enter a word: ");
	scanf("%s", name);
	printf("Word in reverse: %s", strrev(name));
}
