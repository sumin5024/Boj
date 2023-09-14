#include <iostream>
#include <deque>

using namespace std;


bool arr[100001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a; cin >> a;
		arr[i] = a;
	}

	for (int i = 0; i < n; i++)
	{
		int b; cin >> b;
		if (!arr[i])
			dq.push_front(b);
	}

	int m; cin >> m;
	for (int i = 0; i < m; i++)
	{
		int c; cin >> c;
		dq.push_back(c);
		cout << dq.front() << " ";
		dq.pop_front();
	}
}