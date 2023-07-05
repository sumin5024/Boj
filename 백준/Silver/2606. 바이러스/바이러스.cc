#include <iostream>
#include <vector>

using namespace std;

vector<int> v[101];
bool b[101];
int ans = 0;

void Dfs(int now)
{
	b[now] = true;
	for (int i = 0; i < v[now].size(); i++)
	{
		int next = v[now][i];
		if (b[next])
			continue;
		ans++;
		Dfs(next);
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	Dfs(1);
	cout << ans;
}