#include <stdio.h>

void sayHello(char name[]) {
	printf("Hello %s", name);
}
int main(int argc, char const *argv[])
{
	char myName[] = "Vignesh";
	sayHello(myName);
}
