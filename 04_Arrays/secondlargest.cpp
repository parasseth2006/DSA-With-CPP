#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {23,12,45,32,13,45,67,89,98,105};
    int n = arr.size();
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for (int i= 0; i<n;i++){
        if (arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
    }
    

    cout<< " "<< slargest;
    return 0;
}
