#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int tmp = n;
	for (int i = 0; i < tmp; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << '*';
		}
		cout << '\n';
		n--;
	}
}