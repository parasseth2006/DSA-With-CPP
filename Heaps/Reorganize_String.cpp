#include <bits/stdc++.h>
using namespace std;
string reorganizeString(string s) {
    int n = s.length();
    //1. Map to store chars with their frequency
    unordered_map<char,int> freq;
    for(int i = 0; i < n; i++){
        freq[s[i]]++;
    }
    //2. Max Heap to store <freq,char> pair
    priority_queue<pair<int,char>>pq;
    for(auto it : freq){
        pq.push({it.second, it.first});
    } 
    //to store result string res
    string res = "";
    pair<int, char> prev = {0, '#'};
    //Store the character used in previous position
    while(!pq.empty()){
        //Get most frequent element
        pair<int,char>p = pq.top();
        pq.pop();
        //Use it and push into res string
        res.push_back(p.second);
        p.first--;
        //Put prev char back to heap only after using it 
        if(prev.first > 0){
            pq.push(prev);
        }
        //Curr char become prev
        prev = {p.first, p.second};
    } 
    if(res.size() != s.size()){
        return "";
    }
    return res;
}
int main (){
    string s = "aaabbc";
    string ans = reorganizeString(s);
    cout << ans;
}