#!/usr/bin/python3
def island_perimeter(grid):
	row = len(grid)
	col = len(grid[0])
	perimeter = 0
	for i in range(row):
		for j in range(col):
			if grid[i][j] == 1:
				if grid[i -1][j] != 1:
					perimeter += 1
				if grid[i][j -1] != 1:
					perimeter += 1
				if grid[i + 1][j] != 1:
					perimeter += 1
				if grid[i][j + 1] != 1:
					perimeter += 1
	return perimeter