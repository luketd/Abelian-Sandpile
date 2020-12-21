
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

    if (argc == 2){
        string fileGet = argv[1];
        sandpile = getFile(fileGet); 
    } else if (argc == 3) {
        sandpile = randomPile(atoi(argv[1]), atoi(argv[2]));
    } else {
        cout << "invalid input" << endl;
        return 0;
    }

    Animation animation; 
    animation.push_back(sandpile);
    bool isStable = false;
    int N = sandpile.size();
    while (isStable == false){
            for (int i = 0; i < N; i++)
            {

                for (int j = 0; j < N; j++)
                {
                    if (sandpile[i][j] < 4){
                        sandpile[i][j] = sandpile[i][j];
                    }
                    //check to see if the point in the sandpile is unstable
                    if (sandpile[i][j] >= 4)
                    {
                        //checks boundaries of the sandpile
                        sandpile[i][j] -= 4;
                        if (i > 0){ 
                            sandpile[i - 1][j] += 1;
                            
                        }
                        if (i < N - 1){
                            sandpile[i + 1][j] += 1;
                            
                        }
                        if (j > 0 ){
                            sandpile[i][j - 1] += 1;
                            
                        }
                        if (j < N-1) {
                            sandpile[i][j + 1] += 1;
                            
                        }

                    }
                    

                }
            }
            isStable = stable(sandpile); //returns true or false
            animation.push_back(sandpile);


    }
    animate(animation);
    
}
