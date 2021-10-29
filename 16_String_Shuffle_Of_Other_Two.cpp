//Check whether a string is a valid shuffle of two
//strings or not

#include<bits/stdc++.h>
using namespace std;

int main() {
    int z = 0;
    string s1, s2, s3;
    map<char, int> arr1, arr2;
    cout << "\nEnter the first string: ";
    cin >> s1;
    cout << "\nEnter the second string: ";
    cin >> s2;
    cout << "\nEnter the string to check: ";
    cin >> s3;
    for (int i = 0; i < s1.length(); i++) {
        arr1[s1[i]]++;
    }
    for (int i = 0; i < s2.length();i++) {
        arr1[s2[i]]++;
    }
    for (int i = 0; i < s3.length(); i++) {
        arr2[s3[i]]++;
    }
    if(s3.length()!=s1.length()+s2.length()) {
        z = 1;
    }
    else {
        for(auto i: arr1) {
             if(arr2[i.first]!=i.second) {
                 z = 1;
                 break;
             }
        }
    }
    if(z==0) {
        cout << "\nThe given string is a shuffle of the other two string";
    }
    else {
        cout << "\nThe given string is not a shuffle of the other two strings";
    }
    return 0;
}