#include <iostream>
using namespace std;

int toggleKthBit(int n, int k) {
    // Code here
    return n ^ (1 << k);
}

int main(){
    cout << toggleKthBit(13,2);
}