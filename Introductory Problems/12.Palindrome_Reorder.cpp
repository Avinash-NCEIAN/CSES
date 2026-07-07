#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;

	vector<int>freq(27,0);
	int len = str.length();
	for(int i = 0; i<len; i++) {
		int idx = str[i]-'A'+1;
		freq[idx]++;
	}

	string str1 = "",str2 = "",str3 = "",ans = "";
	bool is_odd = 1;
	for(int i = 0; i<27; i++) {
		if(freq[i]>0 && freq[i]%2 == 0) {
			int len = freq[i]/2;
			while(len-->0) {
				str1+=((char)(64+i));
				str2+=((char)(64+i));
			}
		} else if(is_odd && freq[i]%2 != 0) {
			is_odd = 0;
			while(freq[i]-->0) {
				str3+=((char)(64+i));
			}
		} else if(freq[i]%2 != 0) {
			ans+=("NO SOLUTION");
			break;
		}
	}

	reverse(str2.begin(),str2.end());
	if(ans == "") {
		ans+=(str1+str3+str2);
		cout<<ans;
	} else cout<<ans;
}