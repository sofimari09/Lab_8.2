#include <iostream>
#include <string>
using namespace std;

string Change(string str)
{
	size_t pos1 = -1;
	size_t pos2 = 0;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] == '(' && pos1 == -1)
			pos1 = i;
	for (size_t i = str.length() - 1; i > 0; i--) 
		if (str[i] == ')' && pos1 >= 0)
		{
			pos2 = i;
			str.erase(pos1, (pos2 - pos1 + 1));
			break;

		}
	
	return str;
}
int main()
{
	string str ;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Result: " << Change(str) << endl;
	return 0;
}
