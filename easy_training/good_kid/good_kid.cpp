#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    
    string st;
    getline(cin, st);
    int t = std::stoi(st);
    int results[t];

    for(int i = 0; i < t; i++){
        string sn;
        getline(cin, sn);
        int n = std::stoi(sn);

        string str;
        getline(cin, str);
        str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

        int array [n];

        for(int j = 0; j < n; j++){
            array[j] = str[j] - '0';
        }

        int mul = 1;
        int max = 0;

        for(int k = 0; k < n; k++){
            array[k] = array[k] + 1;
            for(int l = 0; l < n; l++){
                mul = mul * array[l];
            }
            if(mul > max){
                max = mul;
            }
            array[k] = array[k] - 1;
            mul = 1;
        }
        results[i] = max;
    }
    
    for(int m = 0; m < t; m++){
        cout << results[m] << endl;
    }

    return 0;
}
