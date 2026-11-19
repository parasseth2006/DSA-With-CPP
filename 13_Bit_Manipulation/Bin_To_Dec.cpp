#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string& b) {
    int len = b.length();
    int p2 = 1;
    int num = 0;
    for(int i = len - 1; i >= 0; i--){
        if(b[i] == '1'){
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}
int main(){
    int ans = binaryToDecimal("1101");
    for(auto it: ans){
        cout << it;
    }
}