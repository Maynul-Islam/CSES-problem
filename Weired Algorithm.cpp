#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(void)
{
    ll n;
    cin>>n;
    cout << n <<" ";
    while(n!=1)
    {
        if(n%2==0)
        {

            n=n/2;
            cout << n <<" ";

        }
        else
        {

            n = n*3 +1;
            cout << n << " ";

        }
    }
    return;
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
