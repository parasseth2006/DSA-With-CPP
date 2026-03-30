#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    
    vector<int>nums1 = {1,2,3,4,5};
    vector<int>nums2 = {3,4,5,6,7,8};
    set<int> st;
    int n1= nums1.size();
    int n2= nums2.size();
    for(int i=0;i<n1;i++){
        st.insert(nums1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(nums2[i]);
    }
    vector<int>unionarray;
    for(int it:st){
        unionarray.push_back(it);
    }
    int nu=unionarray.size();
    for(auto it:unionarray){
        cout<<it<< " ";
    }
}