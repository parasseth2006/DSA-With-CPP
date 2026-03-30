#include <iostream>
using namespace std;
void printname(int i,int n){
    if (i>n){
        return;
    }
    else
    cout<< i <<endl;
    printname(i+1,n);
}
int main(){
    cout<< "Enter no of times: ";
    int i=1;
    int n;
    cin>> n;
    printname(i,n);
}