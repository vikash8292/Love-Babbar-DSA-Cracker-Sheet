//Check whether the given string is palindrome or not

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int z = 0;
    cout << "\nEnter the string: ";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i]!=s[s.length()-1-i]) {
            z = 1;
            break;
        }
    }
    if(z==1) {
        cout << "\nNot a palindrome\n";
    }
    else {
        cout << "\nPalindrome\n";
    }
    return 0;
}