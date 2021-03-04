#include<stdio.h>
//#include<conio.h>
int main() {
//clrscr();
// Five stars (one to five)
//	for(int i = 1; i <= 5; i++) {
	//	for(int j = 1; j <= i; j++) {
	//		printf("*");
	//	}
	//printf("\n");
	//}

// Five stars centered
for(int i = 1; i <= 10; i++) {
	for(int j = 1; j <= i; j++) {
		if(j % 2 == 0) {
		printf("o");
		}
	}
printf("\n");
}


}

