#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll int n;
   cin>>n;
   
     // (Bitwise &) Method to check if a number is a power of 2 or not
    // Time Complexity - O(1)
   // Space Complexity - O(1)
   if(n<=0)
     cout<<"NO"<<endl;
   else if((n&(n-1))==0)
     cout<<"YES"<<endl;
   else
     cout<<"NO"<<endl;
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
return 0;
}