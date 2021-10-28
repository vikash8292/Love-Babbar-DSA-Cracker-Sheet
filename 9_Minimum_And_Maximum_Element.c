//Maximum and minimum element in an array
//using minimum number of comparisons

#include<stdio.h>

typedef struct minmax {
    int min, max;
} minmax;

minmax fun(int *, int, int);

int main() {
    int n;
    minmax res;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    res = fun(arr, 0, n-1);
    printf("\nMinimum value of the array: %d\n", res.min);
    printf("\nMaximum value of the array: %d\n", res.max);
}

minmax fun(int *arr, int low, int high) {
    if(low==high) {
        minmax temp;
        temp.min = arr[low];
        temp.max = arr[low];
        return temp;
    }
    else if(low+1==high) {
        minmax temp;
        if(arr[low]<arr[high]) {
            temp.min = arr[low];
            temp.max = arr[high];
        }
        else {
            temp.min = arr[high];
            temp.max = arr[low];
        }
        return temp;
    }
    else {
        minmax temp1, temp2, temp3;
        temp1 = fun(arr, 0, high / 2);
        temp2 = fun(arr, (high / 2)+1, high);
        if(temp1.min<temp2.min) {
            temp3.min = temp1.min;
        }
        else {
            temp3.min = temp2.min;
        }
        if(temp1.max>temp2.max) {
            temp3.max = temp1.max;
        }
        else {
            temp3.max = temp2.max;
        }
        return temp3;
    }
}