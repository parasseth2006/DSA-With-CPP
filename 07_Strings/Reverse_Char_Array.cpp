#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ReverseStr(char str[],int n){
    int st = 0, end = n-1;
    while(st < end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    cout<< str;
}
int main(){
    char arr[] = "hello";
    ReverseStr(arr,5);
    return 0;
}