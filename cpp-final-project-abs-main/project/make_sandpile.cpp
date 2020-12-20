#include <algorithm>
#include <fstream>
#include <iterator>
#include <random>
#include <sstream>
#include <string>
#include <vector>

#include "make_sandpile.h"

using namespace std;

// define a function for generating a random sandpile given a size and count
make_sandpile::randomPile(int size, int count)
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
        rand_pile[row][column]++;
    }
    return sandpile;
}

// define a function for reading a sandpile from a file given its filename
make_sandpile::readFile(ifstream &file)
{
    Sandpile sandpile;
    string buffer = "";

    while (getline(file, infile)
    {
        istringstream ss(buffer);
        copy(std::istream_iterator<int>(ss), {}, back_inserter(sandpile.emplace_back()));
    }
    return sandpile;
}