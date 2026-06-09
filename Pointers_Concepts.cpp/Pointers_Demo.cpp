#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a; //Pointer ptr to store memory address of variable 'a'
    cout<< ptr << endl; //Printing address 
    cout<< &a << endl;
    return 0;
}