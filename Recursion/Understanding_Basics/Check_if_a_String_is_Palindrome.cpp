#include <bits/stdc++.h>
using namespace std;
bool check(string str, int low, int high){
    int n = str.length();
    int len = low + high - 1;
    if(low>=high){
        return  true;
    }
    if(str[low] != str[high]){
        return false;
    }
    
    return check(str,low+1, high-1);
}

    

int main(){
    cout << check("madam", 0, 4);
}

