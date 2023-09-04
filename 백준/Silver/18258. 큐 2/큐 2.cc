#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> q;
	int n; cin >> n;
	while (n--)
	{
		string str; cin >> str;
		if (str == "push") // 1
		{
			int x; cin >> x;
			q.push(x);
		}
		else if (str == "pop") // 2
		{
			if (q.empty())
				cout << "-1\n";
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size") // 3
		{
			cout << q.size() << '\n';
		}
		else if (str == "empty") // 4
		{
			if (q.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (str == "front") // 5
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << '\n';
		}
		else if (str == "back") // 6
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << '\n';
		}
	}
}