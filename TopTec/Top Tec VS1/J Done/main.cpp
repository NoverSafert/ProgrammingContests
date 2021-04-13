#include <iostream>

using namespace std;

int main(){
    int t, n, cand, sum, cant1, cant2;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        sum = 0;
        cant1 = 0;
        cant2 = 0;
        for(int j = 0; j < n; j++){
            cin >> cand;
            sum+= cand;
            if(cand == 1){
                cant1++;
            }
            else{
                cant2++;
            }
        }
        if(n % 2 == 0 && sum % 2 == 0){
            cout << "YES\n";
        }
        else if(n % 2 == 1 && sum % 2 == 0 && (cant1 % 2 == 0 && cant2*2 % 2 == 0) && (cant1 != 0 && cant2 !=0) ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}