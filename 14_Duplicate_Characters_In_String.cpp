//Print the duplicate characters in the string

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int z = 0;
    cout << "\nEnter the string: ";
    cin >> s;
    map<char, int> arr;
    for (int i = 0; i < s.length(); i++) {
        arr[s[i]] += 1;
    }
    for(auto it: arr) {
        if(it.second>1) {
            z = 1;
            cout << it.first << " - " << it.second << "\n";
        }
    }
    if(z==0) {
        cout << "\nNo duplicates in the string\n";
    }
    return 0;
}