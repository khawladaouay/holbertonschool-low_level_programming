#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if i <= 0 or not grid[i - 1][j]:
                    perim += 1
                if j <= 0 or not grid[i][j - 1]:
                    perim += 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    perim += 1
                if i >= len(grid) - 1 or not grid[i + 1][j]:
                    perim += 1

    return perim
