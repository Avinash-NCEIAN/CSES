#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;

	int len = str.length();
	int l = 1,ml = 1;
	if(len == 1)cout<<ml;
	else {
		for(int i = 1; i<len; i++) {
			if(str[i] == str[i-1]) {
				l++;
			} else {
				ml = max(l,ml);
				l = 1;
			}
		}

    	cout<<max(ml,l);
	}

	return 0;
}
