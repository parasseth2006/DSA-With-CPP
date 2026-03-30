#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n) {
    int count = 0;
    int dup = n;
    int arm = 0;
    int temp = n;              
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }
    temp = n;
    while(temp != 0){
        int digit= temp%10;
        arm = arm + pow(digit,count);
        temp=temp/10;
    }
    return arm==dup;


}
        
int main(){
    cout<< "Enter a number: ";
    int x; 
    cin>> x;

    cout<< armstrong(x);
}
