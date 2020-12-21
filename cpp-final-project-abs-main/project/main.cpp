
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
        ifstream inFile(argv[1]);
        sandpile = getFile(inFile);
        inFile.close();
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
    cout << N;
    cout << "SIZE" << endl;
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
                        //cout << i << endl;    
                        //cout << j << endl;
                        
                        
                        sandpile[i][j] -= 4;

                        //cout << sandpile[i][j] << endl;
                        if (i - 1< 0){
                            
                        }else{
                            cout << i - 1 << endl;   
                            cout << "X-1" << endl;
                            sandpile[i - 1][j] += 1;
                        }
                        if (i + 1 > N){
                            
                        }else{
                            cout << i + 1 << endl;
                            cout << "X+1" << endl;
                            sandpile[i + 1][j] += 1;
                        }
                        if (j - 1 < 0){
                            
                        }else{
                            
                            cout << "Y-1" << endl;
                            sandpile[i][j - 1] += 1;
                        }
                        if (j + 1 > N) {
                            
                        }else{
                            cout << "Y+1" << endl;
                            sandpile[i][j + 1] += 1;
                        }
                        cout << "DONE" << endl;
                    }
                    

                }
            }
            isStable = stable(sandpile);
            animation.push_back(sandpile);


    }
    animate(animation);
    
}
