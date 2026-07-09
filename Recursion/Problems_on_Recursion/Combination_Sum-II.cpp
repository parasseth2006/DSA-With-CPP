#include <bits/stdc++.h>
using namespace std;
void findCombo(int ind,int target, vector<int> &candidates, vector<vector<int>>&result, vector<int>&ds){
    if(target == 0){
        result.push_back(ds);
        return;
    }
    for(int i = ind; i < candidates.size(); i++){
        if((i > ind) && candidates[i] == candidates[i-1]) continue;
        if(candidates[i] >target ){
            break;    
        }
        ds.push_back(candidates[i]);
        findCombo(i+1, target - candidates[i], candidates, result, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int>ds;
    vector<vector<int>>result;
    sort(candidates.begin(), candidates.end());
    findCombo(0, target, candidates, result, ds);  
    return result;  
}