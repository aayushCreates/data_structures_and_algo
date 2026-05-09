#include<iostream>
#include<vector>

using namespace std;


vector<int> k_rotated(vector<int>& arr, int& k) {
    vector<int>ans;
    int n = arr.size();

    k = k % n;  

    for(int i = n - k; i < n; i++) {
        ans.push_back(arr[i]);
    }

    for(int i = 0; i < k; i++) {
        ans.push_back(arr[i]);
    }

    return ans;
}


