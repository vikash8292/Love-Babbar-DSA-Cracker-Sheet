//Reverse the input string

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "\nEnter the string: ";
    cin >> s;
    for (int i = 0; i < s.length()/2; i++) {
        char temp = s[i];
        s[i] = s[s.length() - 1 - i];
        s[s.length() - 1 - i] = temp;
    }
    cout << "\nReversed String: " << s;
}