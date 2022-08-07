// Created by Infinity
// problem link -> https://leetcode.com/problems/binary-search/

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




int BinarySearch(vector<int>&arr, int n, int target) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target)return mid;
		if (arr[mid] > target)high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}


int recursiveBinarySearch(vector<int>&arr, int low, int high, int target) {
	if (low > high)return -1;
	int mid = (low + high) / 2;
	if (arr[mid] == target)return mid;
	if (arr[mid] > target)return recursiveBinarySearch(arr, low, mid - 1, target);
	else return recursiveBinarySearch(arr, mid + 1, high, target);
}


int main()
{
	init_code();

	int n, target;
	cin >> n >> target;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)cin >> arr[i];

	int ans = BinarySearch(arr, n, target);
	cout << ans << endl;


	// STL implementation of BinarySearch
	/*
		 bool ans = binary_search(arr.begin(), arr.end(), target);
		 cout << ans << endl;

	*/





	return 0;
}