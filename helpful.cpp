#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string getS(string input) {
    int ones = 0, twos = 0, threes = 0;
    string out = "";
    for (auto i: input) {
        if (i == '1') ones++;
        if (i == '2') twos++;
        if (i == '3') threes++;
    }
    for (int i = 0; i < ones; i++) {
        out += "1+";
    }
    for (int i = 0; i < twos; i++) {
        out += "2+";
    }
    for (int i = 0; i < threes; i++) {
        out += "3+";
    }

    out.pop_back();
    return out;
}

int main() {
    string input;
    cin >> input;
    cout << getS(input) << endl;
}