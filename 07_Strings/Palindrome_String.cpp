#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s) {
    int n = s.length();
    int start = 0, end = n-1;
    while(start <end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start])!=tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string str = "madam";
    cout<< isPalindrome(str);
    return 0;
}