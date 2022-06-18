#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/* 
You are given array consisting of n integers. 
Your task is to find the maximum length of an increasing subarray of the given array.
A subarray is the sequence of consecutive elements of the array.
Subarray is called increasing if each element of this subarray strictly greater than previous. */

// For non-consecutive elements
/**
 * @brief get the length longest increasing subarray
 * @param arr the given array
 * @param l length of the array
 * @return longest
 */
int lis(int *arr, int l) {
    // vector whose length is always equal to the longest increasing subarray up to k
    vector<int> ans;
    for (int k = 0; k < l; k++) {
        // get the iterator at the vector's lower_bound of k
        auto it = lower_bound(ans.begin(), ans.end(), arr[k]);
        // push new element to the vector if arr[k] is the larger than its last element
        if (it == ans.end()) ans.push_back(arr[k]);
        else {
            // replace the element at the same position as arr[k]
            *it = arr[k];
        }
    }
    return ans.size();
}

// For consecutive elements
/**
 * @brief get the length longest increasing subarray of consecutive elements
 * @param arr the given array
 * @param l length of the array
 * @return longest
 */
int lisCons(int *arr, int l) {
    // variable for the running increasing subarray of consecutive elements, current element, and longest consecutive subarray
    int currentSubarr = 1, longest = 1, curr = arr[0];

    for (int k = 1; k < l; k++) {
        if (arr[k] > curr) {
            // update currentSubarr and longest
            currentSubarr++;
            longest = max(longest, currentSubarr);
        } else {
            // reset currentSubarr
            currentSubarr = 1;
        }
        // update curr
        curr = arr[k];
    }
    return longest;
}



int main() {
    int t;
    cin >> t;
    int arr[t];
    for (int k = 0; k < t; k++) {
        cin >> arr[k];
    }
    cout << lisCons(arr, t) << endl;
}