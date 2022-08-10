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


class Person {
public:
	string name;
	string adharId;
	string phoneNo;

	//default constructor
	Person() {

	}

	Person(string name, string adharId, string phoneNo) {
		this->name = name;
		this->adharId = adharId;
		this->phoneNo = phoneNo;
	}

	bool operator <(Person & p1) {
		return this->adharId < p1.adharId;
	}
	bool operator >(Person & p1) {
		return this->adharId > p1.adharId;
	}
	bool operator == (Person &p1) {
		return this->name == p1.name and this->adharId == p1.adharId and this->phoneNo == p1.phoneNo;
	}


	friend istream& operator >>(istream & is, Person& p1);
	friend ostream& operator << (ostream & os, Person & p1);


};

istream & operator >>(istream & is, Person & p1) {
	is >> p1.name >> p1.adharId >> p1.phoneNo;
	return is;
}

ostream &operator <<(ostream & os, Person& p1) {
	os << "name : " << p1.name << endl;
	os << "AdhaarId : " << p1.adharId << endl;
	os << "phoneNo : " << p1.phoneNo << endl;
	os << endl;
	return os;
}


string GetPhoneNo(vector<Person>&p, int n, string targetAdharId) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;

		if (p[mid].adharId == targetAdharId)return p[mid].phoneNo;
		if (p[mid].adharId > targetAdharId)high = mid - 1;
		else low = mid + 1;

	}

	return "Adhaar Id Not Found !";
}

int main()
{
	init_code();

	int n;
	cin >> n;
	string targetAdharId;
	cin >> targetAdharId;
	vector<Person>p;
	for (int i = 0; i < n; i++) {
		Person x;
		cin >> x;
		p.push_back(x);

	}

	sort(p.begin(), p.end()); // less than < operator

	for (auto e : p) {
		cout << e << endl;
	}

	string ans = GetPhoneNo(p, n, targetAdharId);
	cout << ans << endl;


	return 0;
}