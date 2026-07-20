class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int>temp;
        for(int i = 0; i < n; i++){
            if(asteroids[i] > 0) temp.push_back(asteroids[i]);
            else{
                while(!temp.empty() && temp.back()>0 && temp.back() < abs(asteroids[i])){
                    temp.pop_back();
                }
                if(!temp.empty() && temp.back() == abs(asteroids[i])) temp.pop_back();
                else if(temp.empty() || temp.back() <0){
                    temp.push_back(asteroids[i]);
                }
            }
        }
        return temp;
    }
};