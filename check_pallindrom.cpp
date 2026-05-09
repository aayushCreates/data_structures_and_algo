#include<iostream>
#include<string>

using namespace std;


bool checkPallindrome(string& str) {
    int n = str.length();
    int i = 0; int j = n - 1;

    while(i < j) {
        if(str[i] != str[j]) return false;
        i++;
        j--;
    }

    return true;
}