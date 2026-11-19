#include <bits/stdc++.h>
using namespace std;
int leastInterval(vector<char>& tasks, int n) {
    int m = tasks.size();
    unordered_map<char,int>freq;
    //Map to store next available seat for the current char
    unordered_map<char,int>free;
    for(int i = 0; i < m; i++){
        freq[tasks[i]]++;
        free[tasks[i]] = 1;
    }
    //Max heap to store freq and char
    priority_queue<pair<int,char>>pq;
    for(auto it: freq){
        pq.push({it.second, it.first});
    }
    int seat = 0;
    while(!pq.empty()){
        vector<pair<int,char>>pulled;
        while(!pq.empty()){
            pair<int,char>p = pq.top();
            pq.pop();
            int fr = p.first;
            int task = p.second;
            if(free[task] <= seat){
                if(p.first > 1){
                    pq.push({p.first - 1, p.second});
                    free[p.second] = seat + n + 1;
                }
                break;
            }
            else{
                pulled.push_back(p);
            }
            
        }
        for(int i = 0; i < pulled.size(); i++){
            pq.push(pulled[i]);
        }
        seat++;
    }
    return seat - 1;
}
int main(){
    vector<char>tasks = {'A','A','A','B','B','B'};
    int ans = leastInterval(tasks,2);
    cout << ans;
    return 0;
}