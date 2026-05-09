#include<iostream>
#include<string>

using namespace std;

void reverse_str(string& str) {
    int n = str.length();
    int i = 0;
    int j = n - 1;

    while(i < j) {
        swap(str[i], str[j]);
    }
}

