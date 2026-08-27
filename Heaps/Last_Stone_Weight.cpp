#include <bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int>& stones) {
    int n = stones.size();
    //Max heap to store all elements of arr 
    priority_queue<int>pq;   
    for(int x: stones)
    {
        pq.push(x);
    }
    //Now traverse heap and remove/smash stones
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        if(a!=b){
            pq.push(a - b);
        }
    }
    if(pq.empty()) return 0;
    return pq.top();
}
int main(){
    vector<int>stones = {2,7,4,1,8,1};
    int ans = lastStoneWeight(stones);
    cout << ans;
}