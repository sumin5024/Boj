#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	int tmp = n;
	int tmp2 = 0;
	for (int i = 0; i < tmp; i++)
	{
		for (int j = 0; j < tmp2; j++)
		{
			cout << ' ';
		}
		tmp2++;
		for (int k = 0; k < n; k++)
		{
			cout << '*';
		}
		n--;
		cout << '\n';
	}
}