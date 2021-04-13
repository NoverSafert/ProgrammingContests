#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n, t, si, di, min, index;
    vector<int> d;
    unordered_map<int, int>s;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        cin >> si >> di;
        s.insert(i,si);
        d.push_back(di);
    }
    if(s.find(n) == s.end()){
        min = 100001;
        for(int j = 0; j < n; j++){
            if(s.at(j)+d[j]*(t/d[j]) <= n && s.at(j)+d[j]*(t/d[j]) < min){
                min = s.at(j);
                index = j;
            }
        }
        cout << index;
    }
    else{
        cout << s.find(n) -> first;
    }
    return 0;
}