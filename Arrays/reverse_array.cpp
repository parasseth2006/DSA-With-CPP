#include <bits/stdc++.h>
using namespace std;
void reverse_array( int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start<end){
        swap (arr[start],arr[end]);
        start ++;
        end --;
    }
}
void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<< endl;
}
int main(){
    int n;
    cout<< "Enter size of array: ";
    cin>> n;
    int arr[n];
    cout<< "enter elements:  ";
    for ( int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<< "Array:\n";
    Print(arr,n);
    cout<< "Array after reversing:\n";
    reverse_array(arr, n);
    Print(arr,n);
}
