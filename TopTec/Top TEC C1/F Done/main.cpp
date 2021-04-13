#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    int t, n, ni, min;
    vector<int> team;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        team = {};
        for(int j = 0; j < n ; j++){
            cin >> ni;
            team.push_back(ni);
        }
        min = 1001;
        sort(team.begin(), team.end());
        for(int k = 0; k < n-1; k++){
            if(team[k+1] - team[k] < min){
                min = team[k+1] - team[k];
            }
        }
        cout << min << "\n";
    }
    return 0;
}