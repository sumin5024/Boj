#include <iostream>

using namespace std;

int ans1 = 0, ans2 = 0;

int fib(int n)
{
	if (n == 1 || n == 2)
	{
		ans1++;
		return 1;
	}
	else
		return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n)
{
	int* arr = new int[n];

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < n; i++)
	{
		ans2++;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n - 1];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	fib(n);
	fibonacci(n);

	cout << ans1 << " " << ans2;
}