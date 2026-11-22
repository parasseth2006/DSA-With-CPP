#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Size of array: ";
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }
    int q;
    cout<< "Enter number of query: ";
    cin>> q;
    while (q--){
        int number;
        cout<< "Enter the number you want frequency of: ";
        cin>> number;
        cout<< mpp[number]<< endl;
    }
    return 0;
}