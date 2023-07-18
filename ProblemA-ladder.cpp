
// state : dp[x] = maximum sum x you can make by jumping from i-1 stair or i-2 stair
// Transition = if(i - 1 >= 0) dp[i] = max(dp[i], stair_value[i-1]) - > adding the value of the i-1th stair from which u get to ith stair
// final subproblem -> dp[n]

void solve() {
	freopen("ladder.in", "r", stdin);
	freopen("ladder.out", "w", stdout);
 int n; cin >> n;
 vector<int> val(n);
 for(int i = 0; i< n; ++i) cin >> val[i];
 vector<int> dp(n+1, INT_MIN);
 dp[0] = 0;
 for(int i = 1; i <= n; ++i){
 	dp[i] = max(dp[i], dp[i-1]+val[i-1]);
 	if(2 <= i) dp[i] = max(dp[i], dp[i-2]+val[i-2]);
 }
 cout << dp[n];
}
