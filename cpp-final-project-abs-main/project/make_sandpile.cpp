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
// need to change for user input rather than randomly generated
int getCoord(int size, int count)
{
    int S, N;
    cout << "S value: ";
    cin >> S;
    cout << "N value: ";
    cin >> N;
    int rand_num;
    uniform_int_distribution<int> dis(0, S);
    mt19937_64 engine(1337);

    int row;
    int column;
    int array[S][S];
    for (int i = 0; i < S; ++i)
    {
        for (int j = 0; j < S; ++j)
        {
            array[i][j] = 0;
        }
    }
    while (N > 0)
    {
        row = dis(engine);
        column = dis(engine);
        /*if (N < rand_num)
        {
            rand_num = N;
        }
        */
        array[row][column] += 1;
        N = N - 1;
        //cout << row;
        //cout << " ";
        //cout << column << endl;
    }
    cout << N << endl;

    for (int i = 0; i < S; ++i)
    {
        for (int j = 0; j < S; ++j)
        {
            cout << array[i][j];
            cout << "  ";
        }
        cout << '\n';
    }
}

// define a function for reading a sandpile from a file given its filename
void getFile()
{
    ifstream infile("sandpile_20.bin");
    vector<int> sandpile;
    string buffer;

    while (infile)
    {
        getline(infile, buffer);
        istringstream ss(buffer);
        copy(std::istream_iterator<int>(ss), {}, back_inserter(sandpile.emplace_back()));
    }
    
}