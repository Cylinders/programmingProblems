#include <stdio.h>

int main() {
	printf("Hello World!");
	return 0;
}



void iterateAndPrint(int** grid, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d", grid[i][j]);
		}
	}   


}
