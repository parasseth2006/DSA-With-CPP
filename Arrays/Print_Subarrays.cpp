// To print all the subarrays of an array
#include <iostream>
#include <vector>
using namespace std;
void Print_Subarrays(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n; j++){
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout<< endl;
        }    
    }
}
int main(){
    Print_Subarrays({1,2,3,4,5}) ;
    return 0;
}