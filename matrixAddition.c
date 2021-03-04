#include<stdio.h>

int main() {
	// Declaring Matrices
	int	matrix1[2][2],
			matrix2[2][2],
			matrixTotal[2][2];

	//Populating matrices with values from user
			// First matrix
	printf("Enter the values of First matrix :\n");
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}

			// Second matrix
	printf("Enter the values of Second matrix :\n");
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	// Adding two matrices
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			matrixTotal[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	// Printing the result
	printf("The sum of two matrices is:\n");
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			printf("%d ", matrixTotal[i][j]);
		}
		printf("\n");
	}
}
