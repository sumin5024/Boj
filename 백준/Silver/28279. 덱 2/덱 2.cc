#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> d;
	int n; cin >> n; // (1 <= n <= 1000000)
	while (n--)
	{
		int num; cin >> num;
		switch (num)
		{
		case 1 :
			int x; cin >> x;
			d.push_front(x);
			break;
		case 2 :
			int x2; cin >> x2;
			d.push_back(x2);
			break;
		case 3 :
			if (!d.empty())
			{
				cout << d.front() << '\n';
				d.pop_front();
			}
			else
				cout << "-1\n";
			break;
		case 4 :
			if (!d.empty())
			{
				cout << d.back() << '\n';
				d.pop_back();
			}
			else
				cout << "-1\n";
			break;
		case 5 :
			cout << d.size() << '\n';
			break;
		case 6 :
			if (d.empty())
				cout << "1\n";
			else
				cout << "0\n";
			break;
		case 7 :
			if (!d.empty())
				cout << d.front() << '\n';
			else
				cout << "-1\n";
			break;
		case 8 :
			if (!d.empty())
				cout << d.back() << '\n';
			else
				cout << "-1\n";
			break;
		}
	}
}