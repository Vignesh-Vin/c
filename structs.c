#include<stdio.h>
#include<string.h>

// Basically these are like classes in JavaScript

struct Student
{
	char name[10];
	int age;
	char village[10];
	char college[10];
};

int printStruct(struct Student student) {
	printf("Your Name\t%s\n", student.name);
	printf("Your Age\t%d\n", student.age);
	printf("Your Village\t%s\n", student.village);
	printf("Your College\t%s\n", student.college);
	return 0;
}

int main()
{

	struct Student vignesh;
	printf("Enter Your Name: ");
	scanf("%s", &vignesh.name);
	printf("Enter Your Village: ");
	scanf("%s", &vignesh.village);
	printf("Enter Your College: ");
	scanf("%s", &vignesh.college);
	printf("Enter Your Age: ");
	scanf("%d", &vignesh.age);
	printf("\n");
	printStruct(vignesh);
}
