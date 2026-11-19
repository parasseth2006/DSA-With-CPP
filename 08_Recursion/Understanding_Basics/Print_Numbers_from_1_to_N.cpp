#include <iostream>
using namespace std;

//Function to print Numbers
void PrintNum(int i, int n){
    if ( i > n) return;
    else{
        cout<< i << endl;
        PrintNum(i+1, n);
    }
}

//Main function
int main(){
    PrintNum(1,10);
    return 0;
}