#include <iostream>
#include <string>
using namespace std;

void diamond(int ast, int d, int n){
    string str = "";
    if(d <= n){
        for(int i = 0; i < ast; i++){
            str.push_back('*');
        }
        for(int j = 0; j < d; j++){
            str.push_back('D');
        }
        for(int k = 0; k < ast; k++){
            str.push_back('*');
        }
        str.push_back(10);
        cout << str;
        diamond(ast-1, d+2, n);
    }
    if(d < n){
    cout << str;
    }
}

int main(){
    int n;
    cin >> n;
    diamond(n/2, 1, n);
    return 0;
}