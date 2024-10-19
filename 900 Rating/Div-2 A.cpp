//Math
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;
 
void solve(int t) {
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
 
    // Sort the array
    sort(a.begin(), a.end());
 
    // Calculate the score
    int score = (n - 1) * (a[n - 1] - a[0]);
 
    cout << score << endl;
}
 
int main() {
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile || !outFile) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif
 
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; i++) {
        solve(i); // Pass the correct case number
    }
 
    return 0;
}