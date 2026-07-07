#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i<n; i++) {
		cin>>arr[i];
	}

	sort(arr,arr+n);

	if(n == 2) {
		cout<<abs(arr[0]-arr[1])<<endl;
	} else if(n == 1) {
		cout<<0<<endl;
	} else {
		int len = n/2;
		int n1 = arr[len],n2 = arr[len-1],n3 = arr[len+1];
		long long sum1 = 0,sum2 = 0,sum3 = 0;
		for(int i = 0; i<n; i++) {
			sum1+=(abs(n1-arr[i]));
			sum2+=(abs(n2-arr[i]));
			sum3+=(abs(n3-arr[i]));
		}

		cout<<min({sum1,sum2,sum3})<<endl;
	}


	return 0;
}