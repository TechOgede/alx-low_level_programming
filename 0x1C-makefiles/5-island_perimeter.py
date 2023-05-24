#!/usr/bin/python3

""" This module defines a function that returns
    the perimeter of an island represented by a grid
"""


def island_perimeter(grid):
    ''' Returns the perimeter of
        and island represented by a grid.
        Of which 1 represents a land zone
        and 0 a water zone
    '''

    perimeter = 0
    
    if not grid:
        return perimeter

    num_rows = len(grid)
    num_cols = len(grid[0])
    i = 0
    j = 0

    while i < num_rows:
        j = 0
        
        while j < num_cols:
            
            if grid[i][j] == 1:

                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == num_rows or grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    perimeter += 1
                if (j + 1) == num_cols or grid[i][j + 1] == 0:
                    perimeter += 1

            j += 1
        i += 1

    return perimeter
