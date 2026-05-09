#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<int> bySorting(vector<int>& arr, int& size, int& target) {
    sort(arr.begin(), arr.end());

    vector<int>ans;

    int l = 0; int r = size - 1;
    while(l < r) {
        int sum = arr[l] + arr[r];
        if(sum == target) {
            ans.push_back(l);
            ans.push_back(r);
            break;
        }else if(sum > target) {
            r--;
        }else {
            l++;
        }
    }    

    return ans;
}


vector<int> by_hash_map(vector<int>& arr, int& size, int& target) {
    unordered_map<int, int> trackEle;  //   (val, idx)

    for(int i = 0; i < size; i++) {
        int temp = target - arr[i];

        if(trackEle.find(temp) != trackEle.end()) {
            return { trackEle[temp], i };
        }

        trackEle[arr[i]] = i;
    }

    return { -1, -1 };
}