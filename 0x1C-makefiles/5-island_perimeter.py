#!/usr/bin/python3
"""Defines a function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Args:
        grid(list): list of integers
    Returns:
        perimeter(int): perimeter of the island
    """
    size = 0
    edges = 0
    rows = len(grid)
    cols = len(grid[0])
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                size += 1
                if i > 0 and grid[i-1][j] == 1:
                    edges += 1
                if j > 0 and grid[i][j-1] == 1:
                    edges += 1

    return size * 4 - edges * 2
