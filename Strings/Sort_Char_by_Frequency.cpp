#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s) {
    int n = s.length();
    if (n==0){
        return "";
    }
    unordered_map<char,int>mpp;
    for(int i = 0; i < n; i++){
        mpp[s[i]]++;
    }
    vector<pair<char,int>> arr;
    for(auto it:mpp){
        arr.push_back(it);
    }
    sort(arr.begin(), arr.end(),
    [](pair<char,int>& a, pair<char,int>& b)
    {
        return a.second > b.second;
    });
    string k = "";
    for(auto it: arr){
        k+= string (it.second, it.first);
    }
    return k;
}
int main(){
    cout<< frequencySort("cccaaa");
}