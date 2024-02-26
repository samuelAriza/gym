#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string st;
    getline(cin, st);
    int t = std::stoi(st);
    char array[8][8];
    int counter = 0;
    char dot = '.';
    string out;
    string results[t];

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 8; j++){
            string str;
            getline(cin, str);
            str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
            for(int k = 0; k < 8; k++){
                array[counter][k] = str[k]; 
        }
        counter = counter + 1;
        }
        for(int k = 0; k < 8; k++){
            for(int l = 0; l < 8; l++){
                if(array[k][l] != '.'){
                    out = out + array[k][l];
                }

            }
        }
        results[i] = out;
        out = "";
        counter = 0;
    }

    for(int m = 0; m < t; m++){
        cout << results[m] << endl;
    }
}