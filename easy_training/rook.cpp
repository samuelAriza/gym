#include <iostream>
using namespace std;

/*Include map to create dictionary to store the equivalences of letters from 'a' to 'h' with the indices of the matrix columns*/
#include <map>

/*Function parsing of column letter by equivalent index in matrix*/
int convert_letter_to_num(map<char, int> chess, string position, map<char, int>::iterator k){
    for(k = chess.begin(); k != chess.end(); k++){
        if(k->first == position[0]){
            return k->second;
        }
    }
} 

/*Function parsing the matrix number to the equivalent letter in chess*/
char convert_num_to_letter(map<char, int> chess, map<char,int>::iterator k, int c){
    for(k = chess.begin(); k != chess.end(); k++){
        if(k->second == c){
            return k->first;
        }
    }
}

/*main function*/
int main(){
    int c, r; /*column, row*/
    
    /*Declaration of the dictionary*/
    map<char, int>::iterator k;
    std::map<char, int> chess = {
        {'a', 0},
        {'b', 1},
        {'c', 2},
        {'d', 3},
        {'e', 4},
        {'f', 5},
        {'g', 6},
        {'h', 7}
    };

    int t; /*Number of test cases*/
    cin >> t; /*Input of number of test cases*/
    string strs[t]; /*Array to store the strings of two characters */

    for(int i = 0; i < t; i++){
        cin >> strs[i]; /*Store the strings*/
    }

    /*Applying the process to each number of cases*/
    for(int l = 0; l < t; l++){
        string position = strs[l];

        c = convert_letter_to_num(chess, position, k);
        r = (int(position[1] - '0') - 8) * (-1);

        int arr[8][8];

        for(int i = 0; i <= 7; i++){
            for(int j = 0; j <=7; j++){
                arr[i][j] = 0;
                if((i == r || j == c) && !(i == r && j == c)){
                cout << convert_num_to_letter(chess, k, j) + (to_string((i - 8) * (-1) )) << endl;
                }
            }
        }
    }
}