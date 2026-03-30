#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    
    vector<int>nums1 = {1,2,3,4,5};
    vector<int>nums2 = {3,4,5,6,7,8};
    vector<int>unionarr;
    int n1= nums1.size();
    int n2= nums2.size();
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(nums1[i]<=nums2[j]){
            if(unionarr.size()==0||unionarr.back()!=nums1[i]){
            unionarr.push_back(nums1[i]);
            }
            i++;
        }
        else {
            if(unionarr.size()==0||unionarr.back()!=nums2[j]){
            unionarr.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(j<n2){
         if(unionarr.size()==0||unionarr.back()!=nums2[j]){
            unionarr.push_back(nums2[j]);
        }
        j++;
    }
    while(i<n1){
        if(unionarr.size()==0||unionarr.back()!=nums1[i]){
            unionarr.push_back(nums1[i]);
        }
        i++;
    }
    int nu=unionarr.size();
    for(auto it:unionarr){
        cout<<it<< " ";
    }
    return 0;
}