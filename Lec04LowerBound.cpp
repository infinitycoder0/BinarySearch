// Created by Infinity
// problem link -> https://leetcode.com/problems/find-smallest-letter-greater-than-target/submissions/

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



int lowerBound(vector<int>&arr, int n, int target) {
	int low = 0, high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target)high = mid - 1;
		else if (arr[mid] > target)high = mid - 1;
		else low = mid + 1;
	}
	return low;
}


int main()
{
	init_code();

	int n, target;
	cin >> n >> target;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)cin >> arr[i];

	int ans = lowerBound(arr, n, target);
	cout << ans << endl;





	return 0;
}