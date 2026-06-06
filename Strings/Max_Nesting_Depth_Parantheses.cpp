#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
    int n = s.size();
    if (n == 0) return 0;
    int maxi = 0;
    int cnt = 0;
    for( int i = 0; i < n; i++){
        if(s[i] == '('){
            cnt++;
        }
        else if( s[i] == ')'){
            maxi = max(cnt,maxi);
            cnt --;
        }
    }
    return maxi; 
}
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout<< maxDepth(s);

}