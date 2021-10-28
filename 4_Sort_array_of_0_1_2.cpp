//Sort an array consisting of only 0s, 1s and 2s without using any sorting algorithm

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, low=0, mid=0, high;
    cout << "\nEnter the number of inputs: ";
    cin >> n;
    high = n - 1;
    int arr[n];
    cout << "\nEnter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while(mid<=high) {
        if(arr[mid]==0) {
            swap(arr[mid++], arr[low++]);
        }
        else if(arr[mid]==1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high--]);
        }
    }
    cout << "\nSorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
