#include <iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        while(n > 2021 && n % 2020 > 0){
            n -= 2021;
        }
        if(n % 2020 == 0 || n % 2021 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";

        }
    }

}