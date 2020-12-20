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
    make_sandpile classSand;
    Sandpile sandpile;

    if (argc == 1){
        cout << "file" << endl;
        ifstream inFile(argv[2]);
        sandpile = classSand.getFile(inFile);
        inFile.close();
    } else if (argc == 2) {
        cout <<"random number" << endl;
        sandpile = classSand.randomPile(atoi(argv[1]), atoi(argv[2]));
    } else {
        cout << "invalid input";
        return 0;
    }
    //Animation animate; 
}
