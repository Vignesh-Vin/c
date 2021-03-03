#include<stdio.h>
int main() {
int lines;
printf("Enter no. of Stars :");
scanf("%d", &lines);
for(int i = 1; i <= lines; i++) {
if(i % 2 != 0) {
    for(int k = 1; k <= (lines - i)/2; k++) {
        printf(" ");
    }
	for(int j = 1; j <= i; j++) {
		printf("*");
	}
	printf("\n");
}
}

}
