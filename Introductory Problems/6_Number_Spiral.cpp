#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x,y;
    cin>>x>>y;
    
    if(x == y){
        cout<<(x*y)-(x-1)<<endl;
    }else if(x > y){
        long long st;
        if(x%2 == 0){
            st = x*x;
            cout<<st-(y-1)<<endl;
        }else{
            st = (x-1)*(x-1)+1;
            cout<<st+(y-1)<<endl;
        }
    }else{
        long long en;
        if(y%2 == 0){
            en = (y-1)*(y-1)+1;
            cout<<en+(x-1)<<endl;
        }else{
            en = y*y;
            cout<<en-(x-1)<<endl;
        }
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