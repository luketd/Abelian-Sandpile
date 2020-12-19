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

void  getFile()
{
    ifstream infile("sandpile_20.bin");
    vector<int> sandpile; 
    string buffer;

    while(infile){
        getline(infile, buffer);
        std::istringstream ss(buffer);
        std::copy(std::istream_iterator<int>(ss), {}, std::back_inserter(sandpile.emplace_back(sandpile)));

    }
    for(int i=0; i < sandpile.size(); i++)
    std::cout << sandpile.at(i) << ' ';
}