
#include <string>
#include <vector>
#include <iostream>
#include <ruc-sci-comp/animate.hpp>

#include "sandpile.h"
#include "make_sandpile.h"

using namespace std;

int main(int argc, char **argv)
{
    Sandpile sandpile;

    if (argc == 1){
        ifstream inFile(argv[2]);
        sandpile = getFile(inFile);
        inFile.close();
    } else if (argc == 2) {
        sandpile = randomPile(atoi(argv[1]), atoi(argv[2]));
    } else {
        cout << "invalid input";
        return 0;
    }
    //Animation animate; 
}
