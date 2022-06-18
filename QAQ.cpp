#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/* how many subsequences "QAQ" are in the string Diamond has given.
Note that the letters "QAQ" don't have to be consecutive, but the order of letters should be exact. */

/**
 * @brief get number of subsequences "QAQ"
 * @param str given string
 * @return number of QAQ subsquences
 */
int qaqSubsequence(string str) {
    // variables for Q count, A count and subsequence count
    int countQ = 0, countA = 0, num = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'Q') {
            // Increment countQ and add countA to number of sequences
            countQ++;
            num += countA;
        } else if (str[i] == 'A') {
            // value of each "A" increases with each "Q"
            countA += countQ;
        }
    }
    return num;
}

int main() {
    // int t;
    // cin >> t;
    // for (int k = 0; k < t; k++) {
        
    // }
    string str;
    cin >> str;
    cout << qaqSubsequence(str) << endl;
}