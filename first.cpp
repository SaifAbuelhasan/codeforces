#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    vector<int> output;
    int arr[4];
    while (t != 0) {
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        for (int i = 1; i < 4; i++) {
            if (arr[i] > arr[0]) {
                c++;
            }
        }
        output.push_back(c);
        c = 0;
        t--;
    }

    for (auto i: output) {
        cout << i << endl;
    }

}