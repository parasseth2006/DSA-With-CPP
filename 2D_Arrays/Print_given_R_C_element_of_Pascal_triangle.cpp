#include <iostream>
using namespace std;
int NCR(int n,int r){
    int res =1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}
int main(){
    cout<< "enter row and column: ";
    int r,c;
    cin>> r >> c;
    cout<< NCR(r-1,c-1);
    return 0;
}