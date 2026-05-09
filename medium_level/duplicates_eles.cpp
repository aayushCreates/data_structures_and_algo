#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> all_duplicates(vector<int>& arr) {
    unordered_map<int, int>counting;
    vector<int>duplicates;

    for(auto e: arr) {
        counting[e]++;
    }

    for(auto e: counting) {
        if(e.second > 1) duplicates.push_back(e.first);
    }

    return duplicates;
}
