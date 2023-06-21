#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int asc = 0;
	int des = 0;
	for (int i = 0; i < 8; i++)
	{
		int a; cin >> a; v.push_back(a);
		if (v.at(i) == i + 1)
			asc++;
		if (v.at(i) == 8 - i)
			des++;
	}

	if (asc == 8)
		cout << "ascending\n";
	else if (des == 8)
		cout << "descending\n";
	else
		cout << "mixed\n";
}