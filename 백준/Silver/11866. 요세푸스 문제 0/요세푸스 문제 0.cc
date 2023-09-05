#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;
	vector<int> ans;
	int n, k; cin >> n >> k; // (1 <= k <= n <= 1000)

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (q.size())
	{
		for (int i = 0; i < k-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		ans.push_back(q.front());
		q.pop();
	}

	cout << '<';
	for (int i = 0; i < ans.size(); i++)
	{
		if (i == ans.size() - 1)
			cout << ans.at(i);
		else
			cout << ans.at(i) << ", ";
	}
	cout << '>';
}