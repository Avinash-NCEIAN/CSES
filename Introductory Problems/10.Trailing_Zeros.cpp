#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
    
    long long m = 5;
    int num = floor(n/m);
    int trail_zero = num;
    while(num>0){
        m*=5;
        num = floor(n/m);
        trail_zero+=num;
    }
    
    cout<<trail_zero;

	return 0;
}