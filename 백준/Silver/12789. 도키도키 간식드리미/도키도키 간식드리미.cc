#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int n; cin >> n;
	stack<int> st;
	queue<int> raw;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int tmp; cin >> tmp;
		raw.push(tmp);
	}

	int cnt = 1;
	while (!raw.empty())
	{
		if (raw.front() == cnt)
		{
			raw.pop();
			v.push_back(cnt);
			cnt++;
		}
		else if (!st.empty() && st.top() == cnt)
		{
			st.pop();
			v.push_back(cnt);
			cnt++;
		}
		else
		{
			st.push(raw.front());
			raw.pop();
		}
	}

	while (!st.empty())
	{
		v.push_back(st.top());
		st.pop();
	}

	bool ans = true;
	for (int i = 0; i < v.size()-1; i++)
	{
		if (v.at(i) > v.at(i + 1))
		{
			ans = false;
			break;
		}
	}

	if (ans == true)
		cout << "Nice\n";
	else
		cout << "Sad\n";
}