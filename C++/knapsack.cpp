// A recursive implementation of 0-1 Knapsack problem
// To compile this use g++ -std=c++11 -O2 -Wall knapsack.cpp

#include <bits/stdc++.h>

using namespace std;

#define MAX_W 1000
#define MAX_V 1000
#define MAX_ITENS 1000

// Weights and values
int W[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_W][MAX_V];

// Returns the maximum value that  
// can be put in a knapsack of capacity w
int knapsack(int i, int w) {

    // If the item does not exist or no longer fits
    // in the bag no value will be added
    if (i < 0 || w <= 0) return 0;

    // If this state has already been resolved
    if (memo[i][w] != -1) return memo[i][w];

    // If the item overflow the capacity of the bag 
    // the item will not be placed in the bag
    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);

    // Otherwise the optimal value will be the highest value 
    // between the decision: item included and item not included
    return memo[i][w] = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);
}

int main() {

	int n, p;

	cin >> n;
	cin >> p;

	memset(memo, -1, sizeof memo);

	for(int i = 0; i < n; ++i){
		cin >> V[i];
		cin >> W[i];
	}

	cout << "The maximum value that can be put in a knapsack of capacity ";
	cout << p << " is " << knapsack(n, p) << endl;

	return 0;
}
