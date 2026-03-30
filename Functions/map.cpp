#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"] = 100;
    m["phones"] = 50;
    m["tablet"] = 100;
    m["laptop"] = 50;
    for(auto i : m){
        cout<< i.first << " "<< i.second<< endl;
    }
    return 0;
}