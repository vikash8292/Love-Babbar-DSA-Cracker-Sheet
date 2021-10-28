//Cyclically rotate an array by one

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp = arr[n - 1];
    for (int i = (n - 1); i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    cout << "\nArray cyclically rotated by one is ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
