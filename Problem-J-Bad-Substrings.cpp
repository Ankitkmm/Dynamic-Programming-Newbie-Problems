
 // The number of all possible strings of size i  is 3*(dp[i-1]), now we only need to subtract 
// the number of invalid strings,
// Let's suppose that whenever we add a letter, we add it to the beginning of the string, then we
 // only care of cases when we put letter a, and the next letter is b,
// so we need to subtract this amount, and it is equal to dp[i-2]

void solve() {
int n; cin >> n;
vector<int> dp(n+1, 0);
dp[0] = 1, dp[1] = 3;
for(int i = 2; i <= n; ++i) dp[i] = 3*dp[i-1] - dp[i-2];
cout << dp[n];
}
