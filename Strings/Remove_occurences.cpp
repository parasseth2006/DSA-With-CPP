#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
    while((s.length() > 0 )&& (s.find(part)< s.length())) {
        int st = s.find(part);
        int end = part.length();
        s.erase(st,end);
    }
    return s;   
}
int main(){
    cout<< removeOccurrences("daabcbaabcbc","abc");
}