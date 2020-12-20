#pragma once

#include <string>
#include <vector>


#include "sandpile.h"



// forward declare a function for generating a random sandpile given a size and count
Sandpile randomPile(int size, int count);


// forward declare a function for reading a sandpile from a file given its filename
Sandpile getFile(std::ifstream &inFile);

