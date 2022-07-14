#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if i <= 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if i >= len(grid[i]) - 1 or grid[i + 1][j] != 1:
                    perimeter += 1
                if j <= 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j >= len(grid[i]) - 1 or grid[i][j + 1] != 1:
                    perimeter += 1
    return perimeter
