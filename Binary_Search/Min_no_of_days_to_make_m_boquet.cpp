#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int n = bloomDay.size();
        int cnt = 0, no_of_boq = 0;
        for(int i = 0; i < n; i++){
            if((bloomDay[i]) <= day){
                cnt++;
                if(cnt == k){
                    cnt = 0;
                    no_of_boq++;
                }
            }
            else {
                
                cnt = 0;
            }
        }
        
        if (no_of_boq >= m){
            return true;
        }
        else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int low = *min_element(bloomDay.begin(), bloomDay.end()); 
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        long long total = 1LL * k * m;
        if(total>n) return -1; 
        while(low <= high){
            int mid = (low+high)/2;
            if(possible(bloomDay, mid, m, k)){
                
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return low; 
        
    }
int main() {
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3; // number of flowers needed per bouquet
    int m = 2; // number of bouquets to make

    
    int ans = minDays(arr, k, m);

    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";

    return 0;
}