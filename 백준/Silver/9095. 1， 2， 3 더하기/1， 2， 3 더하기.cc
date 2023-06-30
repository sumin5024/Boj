#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    
	int t; cin >> t;
	
	int arr[10] = { 1, 2, 4, 7, 13, 24, 44, 81, 149, 274 };
	for (int i = 0; i < t; i++)
	{
		int n; cin >> n;
		cout << arr[n-1] << '\n';
	}
}