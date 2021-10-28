#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    set<int> uni, ins;
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
    int i=0, j=0;
    while(i<n && j<m) {
        if(arr1[i]<arr2[j]) {
            uni.insert(arr1[i++]);
        }
        else if(arr2[j]<arr1[i]) {
            uni.insert(arr2[j++]);
        }
        else if(arr1[i]==arr2[j]) {
            uni.insert(arr1[i++]);
            j++;
        }
    }
    while(i<n) {
        uni.insert(arr1[i++]);
    }
    while(j<m) {
        uni.insert(arr2[j++]);
    }
    cout << "\nUnion of the two sorted array is: ";
    set<int>::iterator itr;
    for (itr = uni.begin(); itr != uni.end(); itr++) {
        cout << *itr << " ";
    }
    i = 0;
    j = 0;
    while(i<n && j<m) {
        if(arr1[i]<arr2[j]) {
            i++;
        }
        else if(arr2[j]<arr1[i]) {
            j++;
        }
        else {
            ins.insert(arr1[i++]);
            j++;
        }
    }
    cout << "\n\nIntersection of two array is: ";
    for (itr = ins.begin(); itr != ins.end(); itr++) {
        cout << *itr << " ";
    }
    return 0;
}