#!/usr/bin/python3
"""defines an island perimeter measuring function"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.
    Args:
    grid (list): A list of list of integers representing an island.
    Returns:
    int: perimeter of the island.
    """
    pm = 0
    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                pm += 4  # Start by adding 4 sides

                if row > 0 and grid[row - 1][column] == 1:
                    pm -= 1
                if row < len(grid) - 1 and grid[row + 1][column] == 1:
                    pm -= 1
                if column > 0 and grid[row][column - 1] == 1:
                    pm -= 1
                if column < len(grid[0]) - 1 and grid[row][column + 1] == 1:
                    pm -= 1

    return pm
