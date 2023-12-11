#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b)
{
	if (a.second == b.second)
	{
		if (a.first.length() == b.first.length())
			return a.first < b.first;
		return a.first.length() > b.first.length();
	}

		return a.second > b.second;
}
unordered_map<string, int> v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	
	while (n--)
	{
		string w;
		cin >> w;
		if (w.length() < m)
			continue;
		v[w]++;
	}
	vector<pair<string, int>> vec(v.begin(), v.end());
	sort(vec.begin(), vec.end(), cmp);
	for (auto p : vec)
		cout << p.first << "\n";

}