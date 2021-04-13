#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void searchwin(vector<int> p)
{
    int i = 0, min = 0;
    sort(p.begin(), p.end());
    if (p[0] != p[1])
    {
        cout << p.front();
    }
    else
    {
        for (i; i < p.size(); i++)
        {
            if(p[i] != p[i + 1]){
                cout << p[i];
            }
        }
    }
}

int main()
{
    int t = 0, n = 0, pi = 0;
    vector<int> p;
    cin >> t;
    for (int i; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> pi;
            p.push_back(pi);
        }
        searchwin(p);
    }
    return 0;
}