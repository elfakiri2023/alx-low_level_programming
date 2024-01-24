#!/usr/bin/python3
"""Module tand in a grid."""

def island_perimeter(grid):
    """Returirid."""

    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                p += neighbors_fn(grid, i, j)

    return p


def neighbors_fn(grid, i, j):
    """Returns a grid."""
    n = 0

    if i <= 0 or not grid[i - 1][j]:
        n += 1
    if j <= 0 or not grid[i][j - 1]:
        n += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        n += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        n += 1

    return n
