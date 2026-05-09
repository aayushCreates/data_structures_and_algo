//  Maximum sum subarray (Kadane's algorithm)


#include<iostream>
#include<vector>
#include<climits>

using namespace std;


int max_subarr_sum(vector<int>& arr) {
    int n = arr.size();
    int tempSum = 0;
    int finalSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        tempSum =  tempSum + arr[i];
        
        finalSum = max(finalSum, tempSum);

        if(tempSum < 0) tempSum = 0;
    }


    return finalSum;
}

