#include <iostream>
using namespace std;

//Function to find sum of n numbers
int sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

//Main function
int main(){
    cout<< sum(10);
    return 0;
}