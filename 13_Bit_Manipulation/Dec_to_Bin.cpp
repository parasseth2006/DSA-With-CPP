#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToBinary(int n) {
    // code here
    if(n == 0) return "0";
    string res = "";
    while(n > 0){
        if(n%2 == 1) res.push_back('1');
        else res.push_back('0');
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string ans = decToBinary(8);
    for(auto it: ans){
        cout << it;
    }
}