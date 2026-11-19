#include <iostream>
using namespace std;

int setKthBit(int n, int k) {
    // Code here
    return n | (1 << k);
}

int main(){
    cout << setKthBit(9,2);
}