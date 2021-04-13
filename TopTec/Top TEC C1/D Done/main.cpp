#include <iostream>

using namespace std;

int main(){
    int t;
    long long int a, b, k, p;
    cin >> t;
    for(int i = 0; i < t; i++){
        p = 0;
        cin >> a >> b >> k;
        if(k % 2 == 0){
            p = (k/2)*a - (k/2)*b;
        }
        else{
            p = ((k/2)+1)*a - (k/2)*b;
        }
        cout << p << "\n";
    }
    return 0;
}