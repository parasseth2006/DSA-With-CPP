#include <iostream>
using namespace std;

bool checkKthBit(int n, int k) {
    //  code here
    if((n & (1 << k)) != 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout << checkKthBit(13,2);
}