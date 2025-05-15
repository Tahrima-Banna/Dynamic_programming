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

    int prev_1=0,prev_2=1,curr;

    for(int i=2;i<=n;++i){

        curr=prev_1+prev_2;
        prev_1=prev_2;
        prev_2=curr;
    }
   return curr;
}


int main() {

    fastIO();
// space optimized fibbonacci Dp problem using recursion+save

  int n;

  cout<<"Enter n :"<<endl;
  cin>>n;



  cout<<fib(n)<<endl;





  return 0;
}
