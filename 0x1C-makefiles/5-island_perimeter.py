#!/usr/bin/python3
"""Contains island_perimeter definition"""
import time


def island_perimeter(grid):
    """Finds island perimeter in given grid

    grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don't exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn't have "lakes" (water inside that isn't connected to the water around the island).

    >>> grid = [\
        [0, 0, 0, 0, 0, 0],\
        [0, 1, 0, 0, 0, 0],\
        [0, 1, 0, 0, 0, 0],\
        [0, 1, 1, 1, 0, 0],\
        [0, 0, 0, 0, 0, 0]\
    ]
    >>> print(island_perimeter(grid))
    12

    Args:
        grid: the grid representing the land
    Return:
        perimeter of the land on the grid
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                # top
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # bottom
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                # left
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # right
                if col == len(grid[row]) - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
