#pragma once

#include <string>
#include <vector>


#include "sandpile.h"

using namespace std;

// forward declare a function for generating a random sandpile given a size and count
int getCoord(int size, int count);


// forward declare a function for reading a sandpile from a file given its filename
void getFile(ifstream fileName);
