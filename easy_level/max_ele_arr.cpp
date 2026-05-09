#include<iostream>
#include<vector>
#include<climits>


using namespace std;

int getMaxEle(vector<int>& arr) {
    int n = arr.size();
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}