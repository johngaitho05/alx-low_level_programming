#!/usr/bin/python3
"""
This module is a solution for the island perimeter problem
"""


def island_perimeter(grid):
    """
    This function computes the perimeter of the island
    represented by the grid.
    :param grid: a list of integers
     - 0 represents a water zone
     - 1 represents a land zone
     - One cell is a square with side length 1
     - Grid cells are connected horizontally/vertically (not diagonally).
     - Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water,
    and there is one island (or nothing).
    * The island doesn’t have “lakes” (water inside
    that isn’t connected to the water around the island).
    """
    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Start with the assumption that the cell
                # contributes 4 to the perimeter
                perimeter += 4

                # Check neighboring cells (up, down, left, right)
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1  # Subtract 1 for the shared edge
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter


if __name__ == "__main__":
    my_grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(my_grid))
