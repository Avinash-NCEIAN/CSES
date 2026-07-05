#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	if(n == 2 || n == 3) {
		cout<<"NO SOLUTION";
		return 0;
	}
	vector<int>even,odd;
	for(int i = n; i>0; i--) {
		if(i%2 == 0)even.push_back(i);
	}
	for(int i = n; i>0; i--) {
		if(i%2 != 0)odd.push_back(i);
	}
	
	int len1 = even.size(),len2 = odd.size();
	if((len1>0 && len2>0) && abs(even[len1-1]-odd[0]) == 1){
	    reverse(even.begin(),even.end());
	    reverse(odd.begin(),odd.end());
	}
	
	for(int i = 0;i<len1;i++){
	    cout<<even[i]<<" ";
	}
	for(int i = 0;i<len2;i++){
	    cout<<odd[i]<<" ";
	}

	return 0;
}