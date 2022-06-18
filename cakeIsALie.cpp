// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// /* 
// There is a n×m grid. You are standing at cell (1,1) and your goal is to finish at cell (n,m).

// You can move to the neighboring cells to the right or down. In other words, suppose you are standing at cell (x,y). You can:

// move right to the cell (x,y+1) — it costs x burles;
// move down to the cell (x+1,y) — it costs y burles.
// Can you reach cell (n,m) spending exactly k burles? */




// /**
//  * @brief recursive function to count moves for can reach
//  * @param n row
//  * @param m column
//  * @param b current buries
//  * @param x current row
//  * @param y current column
//  * @return true if n = x, y = m
//  */
// int countBuries(int n, int m, int b, int x, int y, bool **ready, int *result) {
//     // base case
//     if (x == n && y == m) return b;
//     if (ready[]) 


// }
// /**
//  * @brief check if we can get to point n, m in k buries. Each move to the right costs x buries and to the left costs y buries.
//  * @param n row
//  * @param m column
//  * @param k buries
//  * @return true if position can be reached
//  */
// bool canReach(int n, int m, int k) {

// }


#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        // Variables for n, m, k
        int n, m, k;
        cin >> n >> m >> k;
        cout << (((n*m -1) == k) ? "YES" : "NO") << endl;
    }
}