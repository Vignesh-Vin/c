#include<stdio.h>

int main() {
int matrix1[2][2],
		matrix2[2][2],
		matrixMultiplied[2][2] = {0};
		
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
	
	// Matrix Mulitplication (black magic)
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			for (int k = 0; k <= 1; k++) {
				matrixMultiplied[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	
		// Printing the result
	printf("The product of two matrices is:\n");
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			printf("%d ", matrixMultiplied[i][j]);
		}
		printf("\n");
	}
}
