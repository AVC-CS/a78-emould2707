#ifndef MAIN_HPP
#define MAIN_HPP

// Count cross-shapes in a 10x10 binary grid.
// A cross is centered at M[i][j]==1 with M[i-1][j], M[i+1][j],
// M[i][j-1], M[i][j+1] all equal to 1.

#include <iostream>
#include <iomanip>
using namespace std;

void printout(int[][10], int);

int findcross(int M[][10])
{
   int count = 0;
   for (int i = 1; i < 9; i++){
        for (int j = 1; j < 9; j++){
            if (M[i][j] == 1 &&
                M[i - 1][j] == 1 &&
                M[i + 1][j] == 1 &&
                M[i][j - 1] == 1 &&
                M[i][j + 1] == 1){
                count++;
            }
        }
    }
    return count;
}

void printout(int M[][10], int cnt)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << setw(5) << M[i][j];
        cout << endl;
    }
    cout << "Total found cross " << cnt << endl;
}

#endif
