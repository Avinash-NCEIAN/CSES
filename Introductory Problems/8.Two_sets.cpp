#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	long long sum = (1LL*n*(n+1))/2;
	vector<int> set1,set2;
	if(sum%2 == 0) {
		sum/=2;
		vector<bool> used(n + 1, false);

		for (int i = n; i > 0; i--) {
			if (sum >= i) {
				set1.push_back(i);
				used[i] = true;
				sum -= i;

				if (sum == 0) break;
			}
		}

		for (int i = 1; i <= n; i++) {
			if (!used[i]) {
				set2.push_back(i);
			}
		}
		cout<<"YES"<<endl;
		cout<<set1.size()<<endl;
		for(int i = 0; i<(int)set1.size(); i++) {
			cout<<set1[i]<<" ";
		}
		cout<<endl<<set2.size()<<endl;
		for(int i = 0; i<(int)set2.size(); i++) {
			cout<<set2[i]<<" ";
		}
	} else {
		cout<<"NO";
	}
}