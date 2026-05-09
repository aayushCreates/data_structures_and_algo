#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>
#include<set>


using namespace std;

void remove_duplicates_using_map(vector<int>& arr, vector<int>& ans) {
    int n = arr.size();
    map<int, int> track;

    for(auto e: arr) {
        track[e]++;
    }

    for(auto v: track) {
        ans.push_back(v.first);
    }
}

void remove_duplicates_using_set(vector<int>& arr, vector<int>& ans) {
    int n = arr.size();
    set<int> s;

    for(auto e: arr) {
        s.insert(e);
    }

    for(auto v: s) {
        ans.push_back(v);
    }
}

vector<int> remove_duplicates(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> ans;

    for(int num : arr) {
        if(seen.find(num) == seen.end()) {
            ans.push_back(num);
            seen.insert(num);
        }
    }

    return ans;
}