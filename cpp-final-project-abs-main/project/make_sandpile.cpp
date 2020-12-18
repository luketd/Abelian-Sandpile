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
int getCoord()
{
    int coord = 100;

    std::uniform_real_distribution<double> dis(0,coord);
    mt19937_64 engine(1337);

    //getting random coordinate
    int getRow = dis(engine);
    int getCol = dis(engine);

    return getRow, getCol;

}


// define a function for reading a sandpile from a file given its filename
void getFile()
{
    ifstream infile("sandpile_20.bin");
    vector<int> sandpile; 
    string buffer;

    while(infile){
        getline(infile, buffer);
        istringstream ss(buffer);
        copy(std::istream_iterator<int>(ss), {}, back_inserter(sandpile.emplace_back()));

    }
}