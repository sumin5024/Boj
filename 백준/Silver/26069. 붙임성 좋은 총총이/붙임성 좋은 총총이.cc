#include <iostream>
#include <map>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map<string, bool> m;

	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		string str1; cin >> str1; 
		string str2; cin >> str2;
		m.emplace(str1, false);
		m.emplace(str2, false);
		if (str1 == "ChongChong" || str2 == "ChongChong")
		{
			m[str1] = true;
			m[str2] = true;
		}
		else if (m[str1])
		{
			m[str2] = true;
		}
		else if (m[str2])
		{
			m[str1] = true;
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		if (iter->second == true)
			ans++;
	}
	cout << ans;
}