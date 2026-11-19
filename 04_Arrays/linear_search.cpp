#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {23,45,31,23,13,55,67,43};
    int n = 8 , target;
    cout<<"Enter element you want to search:";
    cin>> target;
    cout<< linear_search(arr,n, target);
}