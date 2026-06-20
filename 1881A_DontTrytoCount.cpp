#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int ops=0;
        while(ops<=5){
            if(x.find(s)!=string::npos){
                cout<<ops<<endl;
                break;
            }
            x+=x;
            ops++;
        }
        if(ops>5) cout<<-1<<endl;
        
    }
 
}