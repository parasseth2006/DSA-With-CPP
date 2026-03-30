#include <iostream>
using namespace std;

int sum(int n){

    int count = 0;
    for (int i = 1; i<=n ; i++){
        count+=i;
    }
    return count;
}
int main(){
    int n;
    cout<< "enter the number :";
    cin>> n;
    cout<< sum(n);
}