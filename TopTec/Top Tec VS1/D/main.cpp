#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

void check(vi *a, vi *cf0, vi *cf1, vi *cf2){
    vi c0, c1, c2;
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 3 == 0){
            c0.push_back(i);
        }
        else if(a[i] % 3 == 1){
            c1.push_back(i);
        }
        else {
            c2.push_back(i);
        }
    }
}

int main(){
    int t, n, ai, mov;
    vi a, c0, c1, c2;
    cin >> t;
    for(int j = 0; j < t; j++){
        mov = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> ai;
            a.push_back(ai);
            if(a[i] % 3 == 0){
                c0.push_back(i);
            }
            else if(a[i] % 3 == 1){
                c1.push_back(i);
            }
            else {
                c2.push_back(i);
            }
        }
        if(c0.size() == c1.size() && c1.size() == c2.size()){
            cout << mov<< "\n";
        }
        else{
            while(c0.size() != c1.size() || c0.size() != c2.size() || c1.size() != c2.size()){
                if(c0.size() > c1.size() && c0.size() > c2.size()){
                    c0[0] = c0[0] + 1;
                    mov++;
                }
                else if(c1.size() > c0.size() && c1.size() > c2.size()){
                    c1[0] = c1[0] + 1;
                    mov++;
                }
                else{
                    c2[0] = c2[0] + 1;
                    mov++;
                }
                check(a, c1, c2, c3);
            }
        cout << mov << "\n";
        }
    }
}