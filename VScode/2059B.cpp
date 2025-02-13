#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define M_PI 314159265358979323846264338327
#define lli long long int
#define li long int
#define ld long double
#define f0r(i, x) for (int i = 0; i < x; i++)
#define all(x) x.begin(), x.end()
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define vi vector<int>
#define vb vector<bool>
#define pb push_back
#define F first
#define S second

using namespace std;

int mod = 1e9 + 7;
const lli inf = 1e9, MAX = 1e6 + 5;
vector<int> adj[MAX];
vector<pair<lli, lli>> adjP[MAX];
// vector<bool>visit(MAX);
vector<vector<bool>> vis(1005, vector<bool>(1005));

int dx[] = {1, 0, -1, 0, -1, -1, 1, 1};
int dy[] = {0, -1, 0, 1, -1, 1, -1, 1};
int di[] = {'D', 'L', 'U', 'R'};

lli gcd(lli a, lli b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

vector<pair<int, lli>> adjj[MAX];
// lli dist[200][200];
// vector<pair<int,lli>>parent(MAX,{-1,0});
vector<lli> paths(MAX);
vector<lli> mn(MAX);
vector<lli> mx(MAX * 12);
vector<int> parent(MAX, -1);
vector<vector<char>> board(200, vector<char>(200));

// vector<int>divs;
// int ans=0;
// void primeDivisor(int n){
//     while(!(n%2)){
////        divs.push_back(2);
//        n/=2;
//        ans++;
//    }
//
//    for(int i=3;i<=sqrt(n);i+=2){
//        if(!(n%i)){
////            divs.push_back(i);
//            n/=i;
//            ans++;
//        }
//
//
//    }
//    if(n>2){
////        divs.push_back(n);
//        ans++;
//    }
//}

//----- num of divisors --------
lli D[MAX + 1000];
void divss() {
  memset(D, 0, sizeof D);
  for (int i = 1; i < MAX; i++) {
    for (int j = i; j < MAX; j += i) {
      D[j]++;
    }
  }
}

vector<bool> visit(MAX);
vector<int> score(MAX, 0);
int cyclePoint = 0;
int cycles = 0;
void dfs(lli x) {
  score[x]++;
  cycles++;
  if (visit[x]) {
    cyclePoint = x;
    return;
  }
  visit[x] = true;
  for (auto u : adj[x]) {
    if (!visit[u]) {
      dfs(u);
    }
  }
}

vector<int> root(MAX);

struct DSU {
  vector<int> par, sz;
  int components;
  DSU(int n) {
    par.resize(n + 1);
    sz.resize(n + 1);
    components = n;
    f0r(i, n) {
      par[i + 1] = i + 1;
      sz[i + 1] = 1;
    }
  }

  int find(int x) {
    if (par[x] != x) {
      par[x] = find(par[x]);
    }
    return par[x];
  }

  bool unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) {
      return false;
    }
    if (sz[a] < sz[b]) {
      swap(a, b);
    }
    par[b] = a;
    sz[a] += sz[b];
    components--;
    return true;
  }
};

struct edge {
  int a, b;
  lli w;

  bool operator<(edge &e) const { return w < e.w; }
};

void Kruskal(int n, vector<edge> &edges) {
  sort(all(edges));
  DSU dsu(n);
  lli mx = 0;
  for (auto e : edges) {
    if (dsu.unite(e.a, e.b)) {
      mx = max(mx, e.w);
    }
    if (dsu.components == 1) {
      break;
    }
  }

  cout << mx << "\n";
}
vector<int> spf(1e6), primeNumbers;
vector<bool> isPrime(1e6, false);

void Sieve() {
  //    for(int i=1;i<=1e6;i++){
  //        spf[i]=i;
  //    }
  isPrime[1] = true;
  isPrime[0] = true;
  for (int i = 2; i * i <= 1e6; i++) {
    if (isPrime[i]) {
      continue;
    }
    for (int j = 2 * i; j <= 1e6; j += i) {
      isPrime[j] = true;
      //            spf[j]=min(spf[j],i);
    }
  }
  f0r(i, 1e6) {
    if (!isPrime[i]) {
      primeNumbers.push_back(i);
    }
  }
}

map<int, int> factorize(int x) {
  map<int, int> fact;
  while (x > 1) {
    fact[x]++;
    x /= spf[x];
    fact[spf[x]]++;
  }
  return fact;
}

lli fastPower(lli a, lli b, lli mod) {

  if (b == 0)
    return 1;
  lli pi = fastPower(a, b / 2, mod);
  if (b & 1) {
    return ((pi * 1ll * pi) % mod * 1ll * a) % mod;
  } else {
    return (pi * 1ll * pi) % mod;
  }
}

bool checkPrime(lli x) {
  for (int i = 2; i < min(x, MAX); i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

vector<string> wordSubsets(vector<string> &words1, vector<string> &words2) {
  int n = words1.size();
  int m = words2.size();
  vector<int> freq(26);
  for (int i = 0; i < m; i++) {
    int count[26] = {0};
    for (int j = 0; j < words2[i].size(); j++) {
      count[words2[i][j] - 'a']++;
    }
    for (int j = 0; j < 26; j++) {
      freq[j] = max(freq[j], count[j]);
    }
  }
  vector<string> ans;
  for (int i = 0; i < n; i++) {
    int count[26] = {0};
    for (int j = 0; j < words1[i].size(); j++) {
      count[words1[i][j] - 'a']++;
    }
    bool flag = true;
    for (int j = 0; j < 26; j++) {
      if (count[j] < freq[j]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ans.push_back(words1[i]);
    }
  }
  return ans;
}

void solve() {

  string s;
  cin >> s;
  unordered_map<char, int> freq;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      cout << 1 << "\n";
      return;
    }
  }
  cout << s.size() << "\n";
}
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  //    freopen("input.in","r",stdin);
  //    freopen("output.out","w",stdout);
  //    Sieve();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}