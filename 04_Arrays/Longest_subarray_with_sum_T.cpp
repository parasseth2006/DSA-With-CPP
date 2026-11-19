// Longest Subarray with Sum T(positive). [Brute Force Apporach]
#include <iostream>
#include <vector>
using namespace std;
int Longest_Subarray(vector<int>arr, int T){
    int n = arr.size();
    int len =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n; j++){
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum == T){
                len = max(len, j-i+1);
            }
        }    
    }
    return len;
}
int main(){
    cout << Longest_Subarray({1,2,3,1,1,1,1,4,2,3}, 3) ;
    return 0;
} 