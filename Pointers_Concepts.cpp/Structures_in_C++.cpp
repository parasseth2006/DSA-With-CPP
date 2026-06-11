//Demo of structure data type
#include <iostream>
using namespace std;
struct employee{
    int eid;
    char favChar;
    float salary;
};

int main(){
    struct employee Paras;
    Paras.eid = 1;
    Paras.favChar = 'a';
    Paras.salary = 100000;
    cout<< Paras.eid <<endl;
    cout<< Paras.favChar <<endl;
    cout<< Paras.salary <<endl;
    return 0;
}
