#include "sandpile.h"
#include <iostream>

bool stable(Sandpile sandpile)
{
  bool is_stable = true;
  int N = sandpile.size(); //Size of the sandpile
  for (int i = 0; i < N; i++) //These for loops will go through the sandpile and see if it is stable or not
  {
    for (int j = 0; j < N; j++)
    {
      if (sandpile[i][j] >= 4) //This will check if the amount of piece is 4 or more so we have to move them off
      {

        is_stable = false;
      }
      else
      {
        continue;
      }
    }
  }
  return is_stable;
}
  