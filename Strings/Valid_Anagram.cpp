#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    unordered_map<char,int> ms;
    unordered_map<char,int> mt;
    //Length of both strings
    if(s.length()!=t.length()) return false;
    int n = s.length();
    for(int i = 0; i < n; i++){
        ms[s[i]]++;
    }
    for(int i = 0; i < n; i++){
        mt[t[i]]++;
    }
    if(ms == mt) return true;
    return false;
}
int main(){
    cout<< isAnagram("anagram","nagaram");
    return 0;
}