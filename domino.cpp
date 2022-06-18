#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int calculate(int area) {
    return area / 2;
}

int main() 
{
    int x, y;
    cin >> x >> y;
    cout << calculate(x*y) << endl;
}