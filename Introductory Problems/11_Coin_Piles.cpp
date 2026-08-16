#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b;
    cin>>a>>b; 
    
    long long Min = min(a,b);
    long long Max = max(a,b);
    
    if((Min+Max)%3 == 0 && Max<=Min*2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    
    while(t-->0){
        solve();
    }
    
    return 0;
}