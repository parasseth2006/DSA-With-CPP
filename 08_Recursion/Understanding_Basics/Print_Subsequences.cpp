#include <iostream>
#include <vector>
using namespace std;
void PrintF(int ind, vector<int>ds, int arr[], int n){
    if(ind == n){
        for(auto it : ds){
            cout<<it;
        }
        cout << endl;
        return;
    }
    //Take or put the particular index in subsequence
    ds.push_back(arr[ind]);
    PrintF(ind+1, ds, arr, n);
    
    ds.pop_back();
    //Not take this element is not added to subsequence
    PrintF(ind+1, ds, arr, n);
}

int main(){
    int arr[] = {3,1,2};
    int  n = 3;
    vector<int>ds;
    PrintF(0,ds,arr,n);
    return 0;

}
