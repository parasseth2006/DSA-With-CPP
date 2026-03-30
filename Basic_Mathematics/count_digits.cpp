#include <iostream>
using namespace std;
int digits(int n){
    int count = 0;
    while(n > 0){
        n= n/10;
        count+=1;
    }
    
    return count;
}

int main(){
    cout<< "Enter a number: ";
    int x; 
    cin>> x;

    cout<< digits(x);
}
