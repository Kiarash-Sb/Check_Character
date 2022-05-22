#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	string str;
	char CheckCharacter;
	cout << "Enter a line of String: ";
	getline(cin , str);
	cout << "Enter Character: ";
	cin >> CheckCharacter;
	for(int i = 0;i < str.size() ; i++)
	{
		if (str[i] == CheckCharacter)
		{
			++count;
		}
	}
	cout << "Number of " << CheckCharacter << " = " << count;
	return 0;
}
