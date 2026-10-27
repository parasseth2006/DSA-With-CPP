static bool comp(vector<int>& first, vector<int>& second) {
    return first[1] < second[1];
}
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if(intervals.size() == 0) return 0;
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), comp);
    int cnt = 1;
    int lastEndTime = intervals[0][1];
    for(int i = 1; i < n; i++){
        if(intervals[i][0] >= lastEndTime){
            cnt ++;
            lastEndTime = intervals[i][1];
        }
    }
    return n - cnt;
}