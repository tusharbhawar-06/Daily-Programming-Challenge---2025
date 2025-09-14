#include <iostream>
using namespace std;

int coinChange(int coins[], int n, int amount) {
    const int INF = 1e9;  
    int dp[10001];              
    for (int i = 0; i <= amount; i++)
        dp[i] = INF;
    dp[0] = 0;                

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }
    return (dp[amount] == INF) ? -1 : dp[amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int n = 3, amount = 11;

    cout << coinChange(coins, n, amount);
}
