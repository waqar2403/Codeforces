// INtresting seems easy, check every possiblity
#include  <bits/stdc++.h>
#include <vector>
using namespace std;

void  solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int max_diff = a[n-1] - a[0];

    for (int i = 0; i < n-1; ++i) {
        max_diff = max(max_diff, a[i] - a[i+1]);
    }
    for (int i = 0; i < n-1; ++i) {
        max_diff = max(max_diff, a[n-1] - a[i]);
    }
    for (int i = 1; i < n; ++i) {
        max_diff = max(max_diff, a[i] - a[0]);
    }

    cout << max_diff << endl;
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


    while(t--) {
    solve();
    }


}