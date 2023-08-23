#!/usr/bin/python3
"""Function that returns the perimeter of an island.
"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.
    Args:
        grid (list): Nested list of integers with 0s (water) and 1s (land).
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
