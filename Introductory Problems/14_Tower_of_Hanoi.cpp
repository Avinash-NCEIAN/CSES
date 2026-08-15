#include<bits/stdc++.h>
using namespace std;

void Tower_of_Hanoi(int n,int from,int to,int by)
{
    if(n == 0)return;
    
    Tower_of_Hanoi(n - 1, from, by, to);

    cout << from << " " << to << endl;

    Tower_of_Hanoi(n - 1, by, to, from);

}

int main()
{
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    Tower_of_Hanoi(n,1,3,2);
    return 0;
}