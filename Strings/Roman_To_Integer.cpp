#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
    int n = s.length();
    if(s.length() == 0) return 0;
    int ans = 0;
    unordered_map<char,int> roman ={{'I',1},{'V',5},{'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    for(int i = 0; i < n-1; i++){
        if(roman[s[i]] < roman[s[i+1]]){
            ans-= roman[s[i]];
        }
        else{
            ans+= roman[s[i]];
        }
    }
    ans = ans + roman[s.back()];
    return ans;    
}
int main(){
    cout<< romanToInt("XXVII");
    return 0;
}