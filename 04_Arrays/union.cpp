#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[6]={6,7,3,2,5,9};
    set<int> st;
    for (int i=0;i<5;i++){
        st.insert(arr[i]);
    }
    for (int i=0;i<6;i++){
        st.insert(arr2[i]);
    }
    vector<int> unionArr;
    for(auto it:st){
        unionArr.push_back(it);
    }
    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i]<< "  ";
    }
    return 0;
}