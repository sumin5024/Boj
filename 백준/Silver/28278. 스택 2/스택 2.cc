#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	stack<int> st;
	while (n--)
	{
		int o; cin >> o;
		switch (o)
		{
		case 1 :
			int x; cin >> x;
			st.push(x);
			break;

		case 2:
			if (!st.empty())
			{
				int t = st.top();
				cout << t << '\n';
				st.pop();
			}
			else
				cout << "-1\n";
			break;

		case 3:
			cout << st.size() << '\n';
			break;

		case 4:
			if (st.empty())
				cout << "1\n";
			else
				cout << "0\n";
			break;
		case 5:
			if (!st.empty())
			{
				int t = st.top();
				cout << t << '\n';
			}
			else
				cout << "-1\n";
			break;
		}
	}
}