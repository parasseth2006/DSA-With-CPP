#include <iostream>
using namespace std;
int main(){
    int age;
    cout<< "Enter your age:";
    cin>> age;
    if (age>=18){
        cout<< "you are adult.";
    }
    else{
        cout<< "You are not adult.";
    }return 0;
}