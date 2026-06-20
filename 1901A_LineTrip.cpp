#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxdist=a[0];
        for(int i=1;i<n;i++){
            maxdist=max(maxdist,(a[i]-a[i-1]));
        }
         maxdist=max(maxdist,2*(x-a[n-1]));
        cout<<maxdist<<endl;
    }
}