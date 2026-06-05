#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
    int n = num.length();
    int indx = -1;
    for(int i = n-1; i >= 0; i--){
        if((num[i]- '0')%2==1){
            indx = i;
            break;
        }
    }
    int i = 0;
    while(( i<=indx) && (num[i]==0)) i++ ;
    return num.substr(i, indx - i + 1);    
}
int main(){
    cout<< largestOddNumber("123458");
    return 0;
}