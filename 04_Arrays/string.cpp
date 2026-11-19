#include <bits/stdc++.h>
using namespace std;
bool Ispalindrome(int i, string s){
    int n= s.size();
    if (i>=n/2){
        return 1;
    }
    if(s[i]!=s[n-1-i]){

        return 0;
    }
    return Ispalindrome(i+1, s);
}
int main(){
    string s= "MadaM";
    cout<< Ispalindrome(0,s);
    
}