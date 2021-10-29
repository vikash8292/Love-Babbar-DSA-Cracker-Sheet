//Check whether one string is rotation of another or not

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cout << "\nEnter the first string: ";
    cin >> s1;
    cout << "\nEnter the second string: ";
    cin >> s2;
    s1 += s1;
    if(s1.find(s2) != string::npos) {
        cout << "\nThe given string is rotation of another\n";
    }
    else {
        cout << "\nThe given string is not rotation of another\n";
    }
    return 0;
}