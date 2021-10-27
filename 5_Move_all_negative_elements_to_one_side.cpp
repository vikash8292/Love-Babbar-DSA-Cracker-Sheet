//Moving negative elements to the right side of the
//array without changing the order of the positive and
//the negative elements

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "\nEnter the number of inputs: ";
    cin >> n;
    cout << "\nEnter the array: ";
    int arr[n], temp[n], left=0, right=(n-1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if(arr[i]<0) {
            temp[right--] = arr[i];
        }
        else {
            temp[left++] = arr[i];
        }
    }
    reverse(temp + right + 1, temp + n);
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    cout << "\nThe array after moving the negative elements to the right is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}