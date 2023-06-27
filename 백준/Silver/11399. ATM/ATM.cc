#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int p; cin >> p;
		v.push_back(p);
	}

	sort(v.begin(), v.end());

	//더하기
	
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum += v.at(j);
		}
		ans += sum;
	}

	cout << ans;
}