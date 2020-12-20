#include "sandpile.h"
#include "make_sandpile.cpp"
#include <iostream>

bool stable(Sandpile sandpile)
{
  int size; 
  bool is_stable = true;
  bool is_not_stable = false;
  size = sandpile.size(); //Size of the sandpile
  for (int i = 0; i < size; i++) //These for loops will go through the sandpile and see if it is stable or not
  {
    for (int j = 0; j < size; j++)
    {
      if (sandpile[i][j] >= 4) //This will check if the amount of piece is 4 or more so we have to move them off
      {
        return is_not_stable;
      }
    }
    return is_stable;
  }
  