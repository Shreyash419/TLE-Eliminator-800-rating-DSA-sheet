#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string ans="No";
        set<int> st(a.begin(),a.end());
        if(st.size()==1) ans="Yes";
        else if(st.size()==2){
            int n1=a[0],count1=1,count2=0;
            for(int i=1;i<n;i++){
                if(a[i]==n1) count1++;
                else count2++;
            }
            if(abs(count1-count2)<2) ans="Yes";
        }
        cout<<ans<<endl;
    }
 
}