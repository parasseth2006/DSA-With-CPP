#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    //*ptr will print thr value stored at that address
    cout<< *ptr<<endl;
    return 0;
}