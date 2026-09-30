#include <iostream>
using namespace std;

int minBitFlips(int start, int goal) {
    int x = start ^ goal;
    int cnt = 0;
    while(x > 1){
        cnt += x & 1;
        x = x >> 1;
    } 
    if(x == 1) cnt ++;    
    return cnt;
}
int main(){
    cout << minBitFlips(13,6);
}