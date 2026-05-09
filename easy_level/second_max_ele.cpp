#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int second_max_ele(vector<int>& arr) {

    int first_max = INT_MIN;
    int second_max = INT_MIN;

    for(int num : arr) {

        if(num > first_max) {
            second_max = first_max;
            first_max = num;
        }
        else if(num > second_max && num != first_max) {
            second_max = num;
        }
    }

    return second_max;
}

int second_min_ele(vector<int>& arr) {

    int first_min = INT_MAX;
    int second_min = INT_MAX;

    for(int num : arr) {

        if(num < first_min) {
            second_min = first_min;
            first_min = num;
        }
        else if(num < second_min && num != first_min) {
            second_min = num;
        }
    }

    return second_min;
}