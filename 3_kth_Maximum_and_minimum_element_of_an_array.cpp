#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {
    int n, k;
    vector<int> v;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    cout << "\nEnter the array: ";
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        v.pb(w);
    }
    cout << "\nEnter the value of k: ";
    cin >> k;
    if(k<0 || k>n) {
        cout << "\nInvalid value\n";
        return 0;
    }
    sort(v.begin(), v.end());
    cout << "\nThe " << k << "th smallest element is " << v[k - 1] << "\n";
    cout << "\nThe " << k << "th largest element is " << v[n - k] << "\n";
    return 0;
}