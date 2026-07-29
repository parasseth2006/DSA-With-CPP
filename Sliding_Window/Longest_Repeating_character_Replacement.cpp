class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, maxFreq = 0, maxLen = 0;
        unordered_map<char, int>freq;
        while(right < s.length()){
            freq[s[right]]++;
            maxFreq = max(maxFreq, freq[s[right]]);
            while((right-left+1) - maxFreq > k){
                freq[s[left]]--;
                left++;
            }
            maxLen = max(right-left+1, maxLen);
            right++;
        }
        return maxLen;
    }
};