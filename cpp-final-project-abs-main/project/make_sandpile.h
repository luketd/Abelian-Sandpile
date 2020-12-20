#pragma once

#include <string>
#include <vector>


#include "sandpile.h"


class make_sandpile
{
    public:

// forward declare a function for generating a random sandpile given a size and count
    randomPile(int size, int count);


// forward declare a function for reading a sandpile from a file given its filename
    readFile(ifstream inFile);

};