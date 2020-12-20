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

int main(int argc, char **argv)
{
    if(argc ==2){
        getFile(argv);
    } else if (argc == 3){
        // not totally right implementtation
        getCoord(argc[0], argc[1]);
    } else {
        cout << "Invalid Input" << endl;
        return 0;
    }
    Animation animate; 

    

}
