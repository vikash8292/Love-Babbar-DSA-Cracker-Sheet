//Merge two sorted arrays without using extra space

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "\nEnter the number of elements in the first array: ";
    cin >> n;
    int arr1[n];
    cout << "\nEnter the first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "\nEnter the number of elements in the second array: ";
    cin >> m;
    int arr2[m];
    cout << "\nEnter the second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int i=0, j=0, k=(n-1);
    while(i<=k && j<m) {
        if(arr1[i]<arr2[j]) {
            i++;
        }
        else {
            swap(arr1[k--], arr2[j++]);
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    cout << "\nMerged Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
