#include <iostream>
using namespace std;
int Fact(int n){
    
    
    
    if (n==0){
        
        return 1;
    }
    else{
    
    return n * Fact(n-1);
    }
}   
int main(){
    cout<< "Enter no.: ";
    
    int n;
    cin>> n;
    if (n<0){
        cout<< "Not Valid";
    }
    else
    cout<<"Factorial is  "<< Fact(n);
}
