//Greedy
#include  <bits/stdc++.h>
#include <vector>
using namespace std;

void  solve(){
int a,b,n;
    cin>>a>>b>>n;
    long long total = b;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (auto x:arr) {
    total += min(1LL+x,a*1LL)-1;
    }
    cout<<total<<endl;
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