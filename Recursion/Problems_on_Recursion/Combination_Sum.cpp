#include <bits/stdc++.h>
using namespace std;
void findCombo(int ind, int target, vector<int> &candidates, vector<vector<int>> &result, vector<int> &ds){
    int n = candidates.size();
    if(ind == n){
        //If target is 0 we have find a valid combination
        if(target == 0){
            result.push_back(ds);
        }
        return;
    }
    //Recursive case:- pick element which is less than or equal to target
    if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        findCombo(ind, target - candidates[ind], candidates, result, ds);
        ds.pop_back(); //Backtrack by deleteing last element
    }
    findCombo(ind+1, target, candidates, result, ds);

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int>ds;
    vector<vector<int>>result;
    findCombo(0, target, candidates, result, ds);  
    return result;  
}

int main(){
    vector<int>candidates = {2,3,5};
    vector<vector<int>>res = combinationSum(candidates,8);
    for (auto &vec : res) {
        cout << "[ ";
        for (int x : vec) {
            cout << x << " ";
        }
        cout << "]\n";
    }
}