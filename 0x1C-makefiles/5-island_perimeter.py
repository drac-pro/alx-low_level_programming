#!/usr/bin/python3
"""Defines a function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Args:
        grid(list): list of integers
    Returns:
        perimeter(int): perimeter of the island
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == rows - 1 or grid[i+1][j] == 1:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == cols - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter + 1
