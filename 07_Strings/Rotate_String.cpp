#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal) {
    if(s.length()!=goal.length()){
        return false;
    } 
    string d = s + s;
    if(d.find(goal)!=string::npos){
        return true;
    } 
    return false;
}
int main(){
    cout<< rotateString("abcde","bcdea");
    return 0;
}