#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        string ans="YES";
        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(k==1 && a[i]<a[i-1] ) ans="NO";
        }
        cout<<ans<<endl;
    }
}