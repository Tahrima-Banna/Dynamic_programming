#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define endl '\n'

const int MOD = 1e9+7;
const int INF = 1e9;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

int fib(int n,int dp[]){

    if(n<=1)return n;

    if(dp[n]!=-1)return dp[n];

    return dp[n]=fib(n-1,dp)+fib(n-2,dp);

}


int main() {

    fastIO();
// Top-down Dp problem using recursion+save

  int n;

  cout<<"Enter n :"<<endl;
  cin>>n;

  int dp[100];

  for(int i=0;i<=n;++i)dp[i]=-1;

  cout<<fib(n,dp)<<endl;





  return 0;
}
