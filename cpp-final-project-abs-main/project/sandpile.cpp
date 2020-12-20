#include "sandpile.h"
#include "make_sandpile.cpp"
#include <iostream>

bool stable(int array[][])
{

  bool is_stable = false;
  bool changed = false;

  while (changed == false)
  {

    // current index being checked
    for (int i = 0; i < N - 1; i++) //rows
    {
      for (int j = 0; j <= i; j++) //element in row
      {
        if (array[i][j] >= 4)
        {
          is_stable = false;
          changed == true;
          array[i][j] = array[i][j] - 4;
        }
        else if (array[i][j] < 4)
        {
          is_stable = true;
          continue;
        }
      }
    }

    // right index
    for (int i = 0; i < N - 1; i++) //  same row
    {
      for (int j = 1; j <= i - 1; j++) // one index right
      {
        if (is_stable == false)
        {
          array[i][j] += 1;
        }
        else if (is_stable == true)
        {
          continue;
        }
      }
    }

    // left index
    for (int i = 0; i < N - 1; i++) // same row
    {
      for (int j = -1; j < i + 1; j++) // one index left
      {
        if (is_stable == false)
        {
          array[i][j] += 1;
        }
        else if (is_stable == true)
        {
          continue;
        }
      }
    }

    // up index
    for (int i = -1; i < N - 1; i++) //one row above
    {
      for (int j = 0; j < i; j++) // same index
      {
        if (is_stable == false)
        {
          array[i][j] += 1;
        }
        else if (is_stable == true)
        {
          continue;
        }
      }
    }

    // down links
    for (int i = 1; i < N - 1; i++) // one row below
    {
      for (int j = 0; j <= i; j++) // same index
      {
        if (is_stable == false)
        {
          array[i][j] += 1;
        }
        else if (is_stable == true)
        {
          continue;
        }
      }
    }
  }
  return is_stable;
}

// define a function that takes a Sandpile by reference and returns a bool (to indicate if the Sandpile is stable)