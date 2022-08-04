// Created by Infinity
// problem link ->

#include <bits/stdc++.h>

using namespace std;

#define ll             long long int
#define mod            1000000007
#define inf            1e18

void init_code() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int linearSearch(int arr[], int target, int n) {

	for (int i = 0; i < n; i++) {
		if (arr[i] == target)return i;
	}
	return -1;
}




int main()
{
	init_code();

	int n, target;
	cin >> n >> target;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];

	int ans = linearSearch(arr, target, n);
	cout << ans << endl;





	return 0;
}