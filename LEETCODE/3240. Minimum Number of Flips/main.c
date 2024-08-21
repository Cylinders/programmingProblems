// NEVER SOLVED

int minFlips(int** grid, int gridSize, int* gridColSize) {
	int numFlips;
	if (*gridColSize % 2 == 0) {
		for (int i = 0; i < gridSize; i++){
			for (int j = 0; j < *gridColSize / 2; j++){
				if (grid[i][j] == grid[i][*gridColSize - j - 1]) {
					grid[i][j] = grid[i][*gridColSize-j-1];
					numFlips++;
				}
			}
		}
	}
	else
	
	return 0; 

}
