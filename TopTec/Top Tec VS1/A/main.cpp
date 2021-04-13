#include <iostream>
#include <string>

using namespace std;

//checar cómo cambiar la variable que indica parentesis abierto para tomar casos donde dos letras sean parentesis abiertos


void checkopen(string *str, char *p, int *pos, int *cA, int *cC){
    if(*pos < str.size()){
        if(str[*pos] == p && *pos != str.size()-1 ){
            *cA = *cA + 1;
            *pos = *pos + 1;
            checkopen(str, p, pos, cA, cC);
        }
        else{
            *cC = *cC + 1;
            *pos = *pos + 1;
            checkopen(str, p, pos, cA, cC);
        }
    }

}

int main(){
    int t, j, cA, cC;
    string str;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> str;
        j = 0;
        cA = 0;
        cC = 0;
        checkopen(&str, &str[j], &j, &cA, &cC);
        if(cA == cC){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}