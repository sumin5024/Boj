#include <iostream>
#include <vector>


using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k; cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int a; cin >> a;
		arr[i] = a;
	}

	int cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (k / arr[i])
		{
			cnt += k / arr[i];
			k %= arr[i];
		}
		if (!k)
			continue;
	}
	cout << cnt << '\n';
}