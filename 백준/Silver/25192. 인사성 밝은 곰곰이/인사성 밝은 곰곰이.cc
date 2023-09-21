#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	set<string> s;
	int n; cin >> n;
	int ans = 0;
	while (n--)
	{
		string str;
		cin >> str;
		if (str == "ENTER")
		{
			ans += s.size();
			s.clear();
		}
		else s.emplace(str);
	}
	ans += s.size();
	cout << ans;
}
