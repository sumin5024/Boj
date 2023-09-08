#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<pair<int, int>> dq;
	int n; cin >> n; // (1 <= n <= 1000)
	for (int i = 1; i <= n; i++)
	{
		int tmp; cin >> tmp;
		dq.push_back(make_pair(tmp, i));
	}

	for (int i = 0; i < n; i++)
	{
		cout << dq.front().second << " ";
		int mov = dq.front().first;
		dq.pop_front(); // 삭제
		if (dq.empty())	break;
		if (mov > 0)
		{
			for (int i = 0; i < mov - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = mov; i < 0; i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}

		
	}

}