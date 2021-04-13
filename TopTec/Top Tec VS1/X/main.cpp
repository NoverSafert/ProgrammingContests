#include <iostream>
#include <vector>
//error en caso 2
using namespace std;

int main(){
    int t, n, ai, cant;
    vector<int> a;
    cin >> t;
    for (int l = 0; l < t; l++){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> ai;
            a.push_back(ai);
        }
        cant = 0;
        for(int j = 0; j < a.size()-1; j++){
            for(int k = j + 1; k < a.size(); k++){
                if((a[j] % a[k] != (a[j] && 0)) && (a[k] % a[j] != (a[k] && 0))){
                    cant++;
                    if((a[k] % a[k+1] != (a[k] && 0))){
                        a.erase(a.begin() + k);
                        break;
                    }
                    else{
                        a.erase(a.begin() + j);
                        break;
                    }
                }
            }
        }
        cout << cant << "\n";
        a = {};
    }

}