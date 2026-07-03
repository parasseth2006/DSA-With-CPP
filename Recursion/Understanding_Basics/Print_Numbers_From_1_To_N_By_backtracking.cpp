#include <iostream>
using namespace std;
void Print(int i,int n){
    if( i < 1) return;
    Print(i-1, n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    Print(n,n);
}