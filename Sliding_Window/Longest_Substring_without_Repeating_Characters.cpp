#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int l = 0;
    int r = 0;
    int maxLen = 0;
    unordered_map<char, int> map;
    while(r < n){
        if(map.find(s[r])!= map.end()){
            if(map[s[r]] >= l){
                l = map[s[r]]+1;
            }
    
        }
        maxLen = max(maxLen, r-l+1);
        map[s[r]] = r;
        r++;
        

    }
    return maxLen;
}

int main(){
    cout<< lengthOfLongestSubstring("pwwkew");
}