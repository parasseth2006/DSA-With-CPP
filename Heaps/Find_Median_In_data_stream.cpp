class MedianFinder {
public:
    priority_queue<int>left_max_heap; //Left Max heap
    priority_queue<int,vector<int>,greater<int>>right_min_heap; //Right Min Heap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left_max_heap.empty() || num < left_max_heap.top()){
            left_max_heap.push(num);
        }
        else{
            right_min_heap.push(num);
        }

        //Always maintain left max heap size 1 greater than or equal to right min heap
        if(left_max_heap.size() > right_min_heap.size() + 1){
            right_min_heap.push(left_max_heap.top());
            left_max_heap.pop();
        }
        else if(left_max_heap.size() < right_min_heap.size()){
            left_max_heap.push(right_min_heap.top());
            right_min_heap.pop();
        }
    }
    
    double findMedian() {
        double mean;
        if(left_max_heap.size() == right_min_heap.size()){
            mean = (left_max_heap.top()+right_min_heap.top())/2.0;
        }
        else {
            mean = left_max_heap.top();
        }
        return mean;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */