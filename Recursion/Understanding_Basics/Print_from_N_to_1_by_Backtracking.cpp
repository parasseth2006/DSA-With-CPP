#include <iostream>
using namespace std;
void Print(int i,int n){
    if( i > n) return;
    Print(i+1, n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    Print(1,n);
}