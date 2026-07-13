#include <bits/stdc++.h>
using namesapce std;
class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i = 0; i < q.size()-1; i++){
            q.push(q.front());
            q.pop();
        }
           
    }
    
    int pop() {
        int x = q.front();
        q.pop();
        return x;   
    }
    
    int top() {
        return q.front();    
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }  
        return false;  
    }
};

