#include <bits/stdc++.h>
using namespace std;
int ans(string s, int n){
    int empty=0,count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
                empty++;
                if(count>2){
                    return 2;
                }
            }
            if(s[i]=='#') count=0;
        }
        return empty;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        cout<<ans(s,n)<<endl;
    }
}