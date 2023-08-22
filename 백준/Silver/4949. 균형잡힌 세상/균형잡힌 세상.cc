#include <iostream>
#include <string>
#include <stack>

using namespace std;
string str;

int main()
{
	while (1)
	{
		getline(cin, str);
		stack<char> a;
		if (str[0] == '.')break;

		for (int i = 0; i < str.length() - 1; i++)
		{

			if (str[i] == '(') a.push('(');
			if (str[i] == '[') a.push('[');
			if (str[i] == ']')
			{
				if (!a.empty() && a.top() == '[') a.pop();
				else { cout << "no\n"; break;}
				
			}
			if (str[i] == ')')
			{
				if (!a.empty() && a.top() == '(') a.pop();
				else { cout << "no\n"; break;}
				
			}
			if (a.empty() && i == str.length() - 2) cout << "yes\n";
			else if (!a.empty() && i == str.length() - 2) cout << "no\n";
		}
	}
}