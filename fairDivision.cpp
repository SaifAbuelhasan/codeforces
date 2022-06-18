#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/**
 * @brief Check if array of ones and twos can be divided evenly
 * @param arr array of ones and twos
 * @param l array length
 * @return true if it's evenly divided, false otherwise
 */
bool isFair(int *arr, int l) {
    // variables for number of ones and twos, and holding the fair boolean
    int ones = 0, twos = 0;
    bool fair = true;

    // iterate through arr
    for (int i = 0; i < l; i++) {
        if (arr[i] == 1) ones++;
        if (arr[i] == 2) twos++;
    }
    
    if (ones == 0) return !(twos & 1);
    return !(ones & 1);
}

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int l;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++) {
            cin >> arr[i];
        }
        
        cout << (isFair(arr, l) ? "YES" : "NO") << endl;
    }
}