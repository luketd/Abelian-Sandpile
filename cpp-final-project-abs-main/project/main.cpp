#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <ruc-sci-comp/animate.hpp>

#include "sandpile.h"
#include "make_sandpile.h"

using namespace std;

int main(int argc, char **argv)
{
    make_sandpile make_pile;
    Sandpile sandpile;

    if(atoi(argv[1] == 1)) //This function uses atoi to convert the string to ints so we can pass the index of them
    {
        if(argc != 4)
        {
            cout << "Invalid Input" << endl;//Error handling
            return 0;
        }
        else
        {
            sandpile = make_pile.randomPile(atoi(argv[1]), atoi(argv[2]));
        }
    } 
    else if (atoi(argv[1] == 2)) //This function uses atoi to convert the string to ints so we can pass the index of them
    {
        if(argc != 3)
        {
            cout << "Invalid Input" << endl;//Error handling
            return 0;
        }
        else
        {
            ifstream inFile(argv[2]);
            sandpile = make_pile.getFile(inFile);
            inFile.close();
        }
    } 
    else 
    {
        cout << "Invalid Input" << endl;//Error handling
        return 0;
    }
    //Animation animate; 
}
