void solve() {
freopen("knight.in", "r", stdin);
freopen("knight.out", "w", stdout);
int n,m; cin >> n >> m;
vector<vector<int>> dp(n, vector<int>(m, 0));
dp[0][0] = 1;   // base case as no of ways wale quesn me base 1 hi hota hai lol or 1 one way to reach (0,0)
for(int i = 0; i < n; ++i)
	for(int j = 0; j < m; ++j){
		if(i - 2 >= 0 && j - 1 >= 0) dp[i][j] += dp[i-2][j-1];
		if(i-1 >= 0 && j-2 >= 0) dp[i][j] += dp[i-1][j-2];
	}
	cout << dp[n-1][m-1];
}
