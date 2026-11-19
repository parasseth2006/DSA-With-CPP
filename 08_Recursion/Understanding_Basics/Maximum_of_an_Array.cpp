#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int>&a, int n){
    if( n==1){
        return a[0];
    }
    int last = a[n-1];
    int answer = fun(a, n-1);
    return max(last, answer);
}
int main(){
    vector<int>a = {23,43,12,56,3,4,67};
    int n = a.size();
    cout<< fun(a, n);
}