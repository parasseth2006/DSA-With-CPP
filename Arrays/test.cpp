#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	vector<int>arr;
	for(int i = 0; i < N; i++){
	    int ele;
        cin>>ele;
	    arr.push_back(ele);
	}
	vector<int>res;
	res.push_back(arr[0]);
	for(int i = 1; i < N; i++){
	    if((arr[i] - arr[i-1] == 1) || arr[i-1]*2 == arr[i] || arr[i-1]*3 == arr[i]){
	        res.push_back(arr[i]);
	    }
	}
    for(auto it: res){
        cout<< it;
    }
    int div = 0;
	for(int i = 0; i < res.size(); i++){
	    int cnt = 0;
	    for(int j = 1; j <= res[i]; j++){
	        if(res[i]%j == 0){
	            cnt++;
	        }
	    }
	    div = div + cnt;
	}
	cout << div;

}


