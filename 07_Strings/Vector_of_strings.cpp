#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    vector<string> str = {"apple","banana","mango"};
    //Print all strings
    for(int i = 0; i< str.size(); i++){
        cout<< str[i]<< " ";
    }
    cout<<endl;
    //Print each character of string vector
     for(int i = 0; i< str.size(); i++){
        for(int j = 0; j<str[i].length(); j++){
            cout<< str[i][j]<< " ";
        }
        cout << endl;
    
    }
    return 0;
}