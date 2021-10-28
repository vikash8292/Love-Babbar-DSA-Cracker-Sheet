//Find the largest sum of contiguous sub-array of the given array

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
    int max=arr[0], sum=arr[0];
    for (int i = 1; i < n; i++) {
        if(arr[i]<sum+arr[i]) {
            sum += arr[i];
        }
        else {
            sum = arr[i];
        }
        if(sum>max) {
            max = sum;
        } 
    }
    cout << "\nThe maximum sum of the subarray is " << max;
}
