#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution {
public:
    long long calculateTotalHours(vector<int>&piles, int hourly){
        int n = piles.size();
        long long totalhours = 0;
        for(int i = 0; i < n; i++){
            totalhours+= ceil((double)piles[i]/(double)hourly);
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = *max_element(piles.begin(), piles.end());
        int low = 1, high = max;
        while( low<=high){
            int mid = (low+high)/2;
            long long totalhours = calculateTotalHours(piles, mid);
            if(totalhours<= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
