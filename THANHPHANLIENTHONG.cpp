#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m;
ll ans;
ll a[N];
vector <ll> adj[N];
bool f[N];

void dfs(ll x){
    f[x] = true;
    for (long i : adj[x])
      if (!f[i]) dfs(i), a[ans]++;
}

void lienthong(){
  memset(f,0,sizeof(f));
  for (long i=1; i<=n; i++){
    if (!f[i]){
        ans++;
        dfs(i);
    }
  }
  cout << ans << xn;
  sort(a+1,a+ans+1);
  for (long i=1; i<=ans; i++){
    cout << a[i]+1 << ' ';
  }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for (long i=1; i<=m; i++){
      ll x,y; cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
   lienthong();
   return 0;
}
