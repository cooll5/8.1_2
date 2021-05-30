#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* s)
{

	char* tmp = new char[strlen(s) * 3 / 2 + 1];
	char* t = tmp;

	tmp[0] = '\0';
	int i = 0;

	while (s[i + 2] != 0)
	{
		if ((s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c'))
		{

			strcat(t, "**");
			t += 3;
			i += 5;
		}
		else
		{
			*t++ = s[i++];
			*t = '\0';
		}
	}
	*t++ = s[i++];
	*t++ = s[i++];
	*t = '\0';

	strcpy(s, tmp);
	return tmp;
}

int main()
{
	char s[101]; 


	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	Change(s);

	cout << endl;
	cout << "Modified string : " << s << endl;


	return 0;
}