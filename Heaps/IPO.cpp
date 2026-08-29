#include <bits/stdc++.h>
using namespace std;
int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
    int n = profits.size();
    //Array to store pair of <capital,profit>.
    vector<pair<int,int>>temp;
    for(int i = 0; i < n; i++){
        temp.push_back({capital[i], profits[i]});
    }
    sort(temp.begin(), temp.end());
    //Max heap to store maximum profit
    priority_queue<int>pq;
    int idx  = 0;
    while(k--){
        while(idx < n){
            if(temp[idx].first > w){
                break;
            }
            pq.push(temp[idx].second);
            idx++;
        }
        if (pq.empty()) return w;
        w = w + pq.top();
        pq.pop();
    }
    return w;
}
int main(){
    vector<int> profits = {1,2,3};
    vector<int> capital = {0,1,1};
    int ans = findMaximizedCapital(2, 0, profits, capital);
    cout << ans;
}