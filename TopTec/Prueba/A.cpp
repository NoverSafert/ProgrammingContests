#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;
// Hard lock si el último valor por incertar es el tamaño del vector.

bool checkVector(vector<int> p, int *temporal, int *currentPos)
{
    vector<int>::iterator ptr;
    if(p.size() == 0){
        if(*temporal == 1){
            return false;
        }
    }
    for (ptr = p.begin(); ptr < p.end(); ptr++)
    {
        if (*ptr == *temporal || *currentPos == *temporal)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> perm = {};

    int test = 0, n = 0, currentPos, temp = 0;
    cin >> test;
    for (int contTest = 0; contTest < test; contTest++) // casos
    {
        cin >> n;
        currentPos = 1;
        while (currentPos <= n) // popular vector
        {
            temp = rand() % n + 1;
            if (checkVector(perm, &temp, &currentPos) == true)
            {
                perm.push_back(temp);
                currentPos++;
            }
        }

        for (int k = 0; k < perm.size() - 1; k++)
        {
            cout << perm[k] << " ";
        }
        cout << perm.back() << endl;
        perm = {};
    }
    return 0;
}
