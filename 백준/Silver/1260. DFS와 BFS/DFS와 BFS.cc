#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>	

using namespace std;

vector<int> vc[10002];
vector<int> ans_bfs;
vector<int> ans_dfs;
bool visit[1002];

void dfs(int d_now)
{
	visit[d_now] = true;
	ans_dfs.push_back(d_now);

	for (long int i = 0; i < vc[d_now].size(); i++)
	{
		if (visit[vc[d_now][i]])
			continue;
		dfs(vc[d_now][i]);
	}
}

void bfs(int b_now)
{
	queue<int> q;
	q.push(b_now);
	visit[b_now] = true;

	while (!q.empty())
	{
		int next = q.front();
		q.pop();
		ans_bfs.push_back(next);

		for (long int i = 0; i < vc[next].size(); i++)
		{
			if (visit[vc[next][i]])
				continue;
			q.push(vc[next][i]);
			visit[vc[next][i]] = true;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, v, a, b;
	cin >> n >> m >> v;

	
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		vc[a].push_back(b);
		vc[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
	{
		sort(vc[i].begin(), vc[i].end());
	}
	bfs(v);
	memset(visit, false, sizeof(visit));
	dfs(v);
	for (long int i = 0; i < ans_dfs.size(); i++)
	{
		cout << ans_dfs[i] << " ";
	}
	cout << '\n';
	for (long int i = 0; i < ans_bfs.size(); i++)
	{
		cout << ans_bfs[i] << " ";
	}

}