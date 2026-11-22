#include <bits/stdc++.h>
using namespace std;
int reverse(int n) {
        int rev = 0;
        int dup = n;
    
        while(n != 0){
        int c= n%10;
        if( (rev> INT_MAX/10) || (rev< INT_MIN/10)){
            return 0;
        }
        rev= rev*10 + c;
        n = n/10;
    }
    
    if (rev== dup){
        return true;
    }
    else 
    return false;
}

int main(){
    cout<< "Enter a number: ";
    int x; 
    cin>> x;

    cout<< reverse(x);
}
