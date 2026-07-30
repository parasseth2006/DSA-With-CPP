class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int left = 0, right = 0, maxLen = -1;
        unordered_map<char,int>freq;
        while(right < s.size()){
            freq[s[right]]++;
            while(freq.size() > k){
                freq[s[left]]--;
                if(freq[s[left]] == 0){
                    freq.erase(s[left]);
                }
                left++;
            }
            if(freq.size() == k){
                int len = right - left + 1;
                maxLen = max(maxLen, len);
            }
            right++;
        }
        return maxLen;
    }
};