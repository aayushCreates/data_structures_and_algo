#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int single_missing_ele(vector<int>& arr) {
    int n = arr.size();

    int actual_sum = (arr[n - 1] * (arr[n - 1] + 1)) / 2;

    int curr_sum = 0;
    for(int num : arr) {
        curr_sum += num;
    }

    return actual_sum - curr_sum;
}

vector<int> multiple_missing_ele(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();

    for(int i = 1; i < n; i++) {

        for(int num = arr[i - 1] + 1; num < arr[i]; num++) {
            ans.push_back(num);
        }
    }

    return ans;
}

vector<int> missing_multiple(vector<int>& arr, int maxVal) {
    unordered_set<int> s(arr.begin(), arr.end());
    vector<int> ans;

    for(int i = 1; i <= maxVal; i++) {

        if(s.find(i) == s.end()) {
            ans.push_back(i);
        }
    }

    return ans;
}