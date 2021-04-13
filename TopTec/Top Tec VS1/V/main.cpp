#include <iostream>
#include <vector>
#include <chrono>
#include <ctime> 
using namespace std;

//Run time error

int main(){
    int t, n, m, dato, aiSum, cont, aIter, xIter, aSum;
    vector<int> a, x, r;
    cin >> t;
    chrono::time_point<chrono::high_resolution_clock> start, end; 
    start = chrono::high_resolution_clock::now(); 
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        aSum = 0;
        for(int j = 0; j < n; j++){
            cin >> dato;
            a.push_back(dato);
            aSum += dato;
        }
        for(int k = 0; k < m; k++){
            cin >> dato;
            x.push_back(dato);
        }
        aIter = 0;
        xIter = 0;
        for(int b : a){
            aiSum = a[0];
            aIter = 1;
            cont = 0;
            if(aSum < 0){
                cont = -1;
            }
            else{
                while (aiSum < x[xIter]){
                    if(aIter == n){
                        aIter = 0;
                    }
                    cont++;
                    aiSum += a[aIter];
                    aIter++;
                    }
            }
            r.push_back(cont);
            aIter = 0;
            xIter++;
        }

        for(int l : r){
            cout << l << " ";
        }
        cout << "\n";
        r = {};
        a = {};
        x = {};
        end = chrono::high_resolution_clock::now(); 
        chrono::duration<double> elapsed_mili = end - start;
        cout << "time: " << elapsed_mili.count() << "\n";
    }
    return 0;
}