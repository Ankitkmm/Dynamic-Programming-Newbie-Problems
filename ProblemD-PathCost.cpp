void solve() {
// freopen("king2.in", "r", stdin);
// freopen("king2.out", "w", stdout);
int grid[8][8];
for(int i = 0; i < 8; ++i)
  for(int j = 0; j < 8; ++j)
  	cin >> grid[i][j];

vector<vector<int>> dp(8, vector<int>(8, INT_MAX));

dp[7][0] = 0; // cell at which u are standing starting position

for(int i = 7; i >= 0; --i)
	for(int j = 0; j < 8; ++j){
    if(i < 7){     // need to check as 7+1 = runtime error
    dp[i][j] = min(dp[i][j], dp[i+1][j] + grid[i][j]); 

    if(j){
    	dp[i][j] = min(dp[i][j], dp[i+1][j-1] + grid[i][j]);
    }
}
     if(j){
    	dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j]);
    }
}
cout << dp[0][7] << "\n";
}
