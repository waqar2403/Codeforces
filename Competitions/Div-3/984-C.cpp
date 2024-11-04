#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    string s;
    cin>>s;
    int q;
    cin>>q;
    int cnt=0;
    for(int i=0;i<s.size()-3;i++) {
        if(s.substr(i,4) == "1100") {
            cnt++;
        }
    }
    while(q--) {
        int a,b;
        cin>>a>>b;
        a--;
        for(int i = a-3;i<a+1;i++) {
            if(i<0 || i+3>=s.size()) continue;
            if(s.substr(i,4) == "1100") cnt--;
        }
        s[a] = '0'+b;
        for(int i = a-3;i<a+1;i++) {
            if(i<0 || i+3>=s.size()) continue;
            if(s.substr(i,4) == "1100") cnt++;
        }
        if(cnt>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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
