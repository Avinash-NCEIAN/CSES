#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (a + b > n)
    {
        cout << "NO" << endl;
    }
    else if ((a == 0 && b != 0) || (b == 0 && a != 0))
    {
        cout << "NO" << endl;
    }
    else if (a == 0 && b == 0)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else if (a == b && a != 0 && b != 0)
    {
        cout << "YES" << endl;
        if (a + b == n || a + b + 1 == n)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            int j = a;
            int temp = n;
            while (j > 0)
            {
                cout << temp << " ";
                j--;
                temp--;
            }
            for (int i = a + 1; i <= n - b; i++)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= b; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    else
    {
        if (a + b == n)
        {
            if (a > b)
            {
                cout << "YES" << endl;
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
                int j = b;
                int temp = n;
                while (j > 0)
                {
                    cout << temp << " ";
                    j--;
                    temp--;
                }

                for (int i = 1; i <= temp; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "YES" << endl;
                int j = a;
                int temp = n;
                while (j > 0)
                {
                    cout << temp << " ";
                    j--;
                    temp--;
                }
                for (int i = 1; i <= temp; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }else if(a+b < n){
            cout<<"YES"<<endl;
            if(a>b){
                for(int i=1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<endl;
                int j = a+b;
                int i = b;
                while(i>0){
                    cout<<j<<" ";
                    i--;
                    j--;
                }
                for(int i=1;i<=j;i++){
                    cout<<i<<" ";
                }
                for(int i=a+b+1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }else{
                int j = a+b;
                int i = a;
                while(i>0){
                    cout<<j<<" ";
                    i--;
                    j--;
                }
                for(int i=1;i<=j;i++){
                    cout<<i<<" ";
                }
                for(int i=a+b+1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<endl;
                for(int i=1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();
    }
    return 0;
}