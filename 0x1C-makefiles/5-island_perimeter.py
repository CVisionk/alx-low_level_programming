#!/usr/bin/python3
"""
This module contains the island_perimeter function.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (list of list of int): A list of lists where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    if not grid or not grid[0]:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4

                # Check above
                if r > 0 and grid[r-1][c] == 1:
                    perimeter -= 2
                # Check left
                if c > 0 and grid[r][c-1] == 1:
                    perimeter -= 2

    return perimeter
