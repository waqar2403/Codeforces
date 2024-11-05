#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    vector<string> r(n);
    int count=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int layers = min(m,n)/2;
    for(int k=0;k<layers;k++) {
        string x;
        for(int i=k;i<m-k;i++) {
            x.push_back(v[k][i]-'0');

        }
        for(int i=k+1;i<n-k;++i) {
            x.push_back(v[i][m-k-1]-'0');
        }
        for(int i=m-2-k;i>=k;i--) {
            x.push_back(v[n-1-k][i]-'0');
        }
        for(int i=n-2-k;i>k;i--) {
            x.push_back(v[i][k]-'0');
        }
        int sz = x.size();
        for (int i = 0; i < sz; ++i) {
            string s;
            for (int j = i; j < i + 4; ++j) {
                s += (x[j % sz] + '0');  // Use modulo to wrap around
            }
            if (s == "1543") {
                count++;
            }
        }
    }
    cout<<count<<endl;
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
        solve(i);
    }

    return 0;
}
