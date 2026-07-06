#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	vector<int>freq(27,0);
	vector<int> fact = {0,1,2,6,24,120,720,5040,40320};
	int len = str.length();
	for(int i = 0; i<len; i++) {
		int idx = str[i]-'a' + 1;
		freq[idx]++;
	}

	int num = 1;
	for(int i = 0; i<27; i++) {
		if(freq[i]>1)num*=fact[freq[i]];
	}

	int ans = fact[len]/num;
	cout<<ans<<endl;
	sort(str.begin(),str.end());
	do {
		cout<<str<<endl;
	} while(next_permutation(str.begin(),str.end()));

	return 0;
}