// Maths , Watch on youtube
#include  <bits/stdc++.h>
#include <vector>
using namespace std;

void  solve(){
long long n,k,x;
    cin>>n>>k>>x;
    long long low =(k*(k+1))/2;
    long long high =(n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    if(x >= low && x <= high) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
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


    while(t--) {
    solve();
    }


}