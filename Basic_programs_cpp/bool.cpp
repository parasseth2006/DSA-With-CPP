#include <bits/stdc++.h>
using namespace std;
bool comp( pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second){
        return true;
    }
    if(p1.second>p2.second){
        return false;
    }
    if(p1.first>p2.first) return true;
    return false;
}
int main(){
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    int n =3;
    sort(a,a+n,comp);
}
