#include <algorithm>
#include <fstream>
#include <iterator>
#include <random>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include "make_sandpile.h"

using namespace std;

// define a function for generating a random sandpile given a size and count
// need to change for user input rather than randomly generated
Sandpile make_sandpile::randomPile(int size, int count)
{
    int row, column;
    uniform_int_distribution<int> dis(0, size-1);
    mt19937_64 engine(1337);
    Sandpile sandpile;
    for (int = 0; i < size; i++)
    {
        Row rows(size,0);
        rand_pile.push_back(rows);
    }
    for(int i = 0; i < count; i++)
    {
        row = dis(engine);
        column = dis(engine);
        rand_pile[row][column] + 1;
    }
    return sandpile;
}

// define a function for reading a sandpile from a file given its filename
Sandpile getFile(ifstream &inFile)
{
    Sandpile sandpile; 
    string buffer;
    while (getline(inFile, buffer))
    {
        istringstream ss(buffer);
        copy(std::istream_iterator<int>(ss), {}, back_inserter(sandpile.emplace_back()));
    }
    return sandpile;
    
}