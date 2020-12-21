
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
        //cout << argv[1] << endl;
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
    //cout << N;
    //cout << "SIZE" << endl;
    while (isStable == false){
            for (int i = 0; i < N; i++)
            {

                for (int j = 0; j < N; j++)
                {
                    //cout << sandpile[i][j] << endl;
                    if (sandpile[i][j] < 4){
                        sandpile[i][j] = sandpile[i][j];
                    }

                    if (sandpile[i][j] >= 4)
                    {
                        
                        
                        sandpile[i][j] -= 4;
                        
                        //cout << sandpile[i][j] << endl;
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
                        
                        //cout << "DONE" << endl;
                        

                    }
                    

                }
            }
            isStable = stable(sandpile);
            animation.push_back(sandpile);


    }
    animate(animation);
    
}
