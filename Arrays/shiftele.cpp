#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int k;
    cin>> k;
    int temp[k];
    for(int i=0;i<k ; i++){
        temp[i]=arr[i];
    }
    for (int i=k;i<5;i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
    int j=0;
    for(int i = 5-k;i<5;i++){
        arr[i] = temp[j];
        j++;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}