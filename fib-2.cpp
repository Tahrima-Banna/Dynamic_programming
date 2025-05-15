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

int fib(int n){

    if(n<=1)return n;

    int dp[100];

    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;++i){

         dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}


int main() {

    fastIO();
// Bottom-up Dp problem using recursion+save

  int n;

  cout<<"Enter n :"<<endl;
  cin>>n;



  cout<<fib(n)<<endl;





  return 0;
}
